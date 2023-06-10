/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:16:57 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 15:11:50 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool checkDate(std::string date);

static bool comp(const std::string& key, const std::pair<std::string, double>& pair) {
  return key < pair.first;
}

void exchangeBitcoin(std::string fileName) {
	std::map<std::string, double> database = getDatabase();
	
	std::fstream file(fileName.c_str(), std::ios::in);
	std::string line, date, value;

	if (!file.is_open())
		throw std::runtime_error("Error: could not open file");

	/* get first line */
	std::getline(file, line);
	if (line != "date | value")
		throw std::runtime_error("Error: input file begin line should 'date | value'");

	/* get one line */
	while (std::getline(file, line)) {
		try {
			exchangeLine(line, database);
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}

void exchangeLine(std::string line, std::map<std::string, double> database) {
	std::string date, value;
	
	if (line.find(" | ") == std::string::npos)
		throw std::runtime_error(("Error: bad input => " + line).c_str());

	std::stringstream ss(line);

	/* get date & value */
	std::getline(ss, date, '|');
	std::getline(ss, value);
	float fValue;
	std::stringstream ssValue(value);
	if (!(ssValue >> fValue) || ssValue.tellg() != -1 || ss.tellg() != -1)
		throw std::runtime_error(("Error: bad input => " + line).c_str());

	/* check date & value */
	checkDate(date);
	if (fValue < 0)
		throw std::runtime_error("Error: not a positive number.");
	if (fValue > 1000)
		throw std::runtime_error("Error: too large a number.");

	std::map<std::string, double>::iterator find;
	find = std::upper_bound(database.begin(), database.end(), date, comp);
	if (find == database.begin())
		throw std::runtime_error("Error: there is no matched data.");
	std::cout << (--find)->first << " => " << fValue << " = " << find->second * fValue << std::endl;	
}

std::map<std::string, double> getDatabase(void) {
	std::map<std::string, double> database;

	std::fstream file("data.csv", std::ios::in);
	std::string line, date, value;

	if (!file.is_open())
		throw std::runtime_error("Error: could not open database file");

	/* get first line */
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("Error: database begin line should 'date,exchange_rate'");

	/* get one line */
	while (std::getline(file, line)) {
		std::stringstream ss(line);

		/* get date & value */
		std::getline(ss, date, ',');
		std::getline(ss, value);
		double dValue;
		std::stringstream ssValue(value);
		if (!(ssValue >> dValue) || ssValue.tellg() != -1 || ss.tellg() != -1)
			throw std::runtime_error(("Error: bad input => " + line).c_str());

		/* check date & value */
		checkDate(date);
		database[date] = dValue;
	}
	return database;
}

static bool checkDate(std::string date) {
	std::stringstream ssDate(date);
	struct tm tStruct;
	char c;
	
	if (!(ssDate >> tStruct.tm_year) || !(ssDate >> c) || c != '-' || \
			!(ssDate >> tStruct.tm_mon) || !(ssDate >> c) || c != '-' || \
			!(ssDate >> tStruct.tm_mday)) {
		throw std::runtime_error("Error: invalid date format: delimeter");
	}
	if (tStruct.tm_year < 0 || tStruct.tm_year > 9999 || tStruct.tm_mon < 1 || tStruct.tm_mon > 12 || tStruct.tm_mday < 1 || tStruct.tm_mday > 31) {
		throw std::runtime_error("Error: invalid date format");
	}
	if ((tStruct.tm_mon == 4 || tStruct.tm_mon	== 6 || tStruct.tm_mon == 9 || tStruct.tm_mon == 11) && tStruct.tm_mday > 30) {
		throw std::runtime_error("Error: invalid date format");
	}
	if (tStruct.tm_mon == 2) {
		if (((tStruct.tm_year % 4 == 0) && (tStruct.tm_year % 100 != 0)) || (tStruct.tm_year % 400 == 0)) {
			if (tStruct.tm_mday > 29) {
				throw std::runtime_error("Error: invalid date format");
			}
		}
		else {
			if (tStruct.tm_mday > 28) {
				throw std::runtime_error("Error: invalid date format");
			}
		}
	}
	return true;
}
