/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:16:55 by hkong             #+#    #+#             */
/*   Updated: 2023/06/08 17:31:14 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <map>

class BitcoinExchange {
	private:
		std::map<std::string, double> database;

		void getDatabase(void);
		

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& bitcoinExchange);
		BitcoinExchange& operator=(const BitcoinExchange& bitcoinExchange);
		~BitcoinExchange();
};

#endif