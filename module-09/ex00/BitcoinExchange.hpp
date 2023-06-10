/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:16:55 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 15:11:56 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <ctime>
# include <string>
# include <map> 

std::map<std::string, double> getDatabase(void);

void exchangeBitcoin(std::string fileName);
void exchangeLine(std::string line, std::map<std::string, double> database);

#endif