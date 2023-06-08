/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:16:57 by hkong             #+#    #+#             */
/*   Updated: 2023/06/08 18:34:35 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& bitcoinExchange) {
	
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& bitcoinExchange) {
	
}

BitcoinExchange::~BitcoinExchange() {
	
}

void BitcoinExchange::getDatabase(void) {
	std::fstream file("data.csv", std::ios::in);
	std::string line, date, value, tmp;

	if (file.is_open()) {
		/* get first line */
		std::getline(file, line);
		if (line != "date | value") {
			//TODO: error
			return ;
		}

		/* get one line */
		while (std::getline(file, line)) {
			std::stringstream ss(line);

			/* get & check date */
			std::getline(ss, date, ',');
			struct tm tStruct;
			char c;
			std::stringstream ssDate(date);
			
			if (!(ssDate >> tStruct.tm_year) || !(ssDate >> c) || c != '-' || \
					!(ssDate >> tStruct.tm_mon) || !(ssDate >> c) || c != '-' || \
					!(ssDate >> tStruct.tm_mday) || ) {
				//error
			}
			if (tStruct.tm_year < 0 || tStruct.tm_year > 9999 || tStruct.tm_mon < 1 || tStruct.tm_mon > 12 || tStruct.tm_mday < 1 || tStruct.tm_mday > 31) {
				//error
			}
			if ((tStruct.tm_mon == 4 || tStruct.tm_mon	== 6 || tStruct.tm_mon == 9 || tStruct.tm_mon == 11) && tStruct.tm_mday > 30) {
				//error
			}
			if (tStruct.tm_mon == 2) {
				if (((tStruct.tm_year % 4 == 0) && (tStruct.tm_year % 100 != 0)) || (tStruct.tm_year % 400 == 0)) {
					if (tStruct.tm_mday > 29) {
						//error
					}
				}
				else {
					if (tStruct.tm_mday > 28) {
						//error
					}
				}
			}

			/* get & check value */
			std::getline(ss, value, ',');
			double dValue;
			std::stringstream ssValue(value);

			if (ssvalue >>)
		}
	}
}