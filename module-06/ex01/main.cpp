/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 01:56:07 by hkong             #+#    #+#             */
/*   Updated: 2023/05/13 02:12:40 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
	Data data;
	Data convertedData;
	
	data.data_char = 'a';
	data.data_int = 42;
	data.data_double = 2.52;

	std::cout << "Data" << std::endl;
	std::cout << "char: " << data.data_char << std::endl;
	std::cout << "int: " << data.data_int << std::endl;
	std::cout << "double: " << data.data_double << std::endl;

	std::cout << "-----------------------------------" << std::endl;
	convertedData = *Serializer::deserialize(Serializer::serialize(&data));
	std::cout << "convertedData" << std::endl;
	std::cout << "char: " << convertedData.data_char << std::endl;
	std::cout << "int: " << convertedData.data_int << std::endl;
	std::cout << "double: " << convertedData.data_double << std::endl;
	return 0;
}