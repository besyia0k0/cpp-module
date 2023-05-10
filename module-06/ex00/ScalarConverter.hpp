/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:52:25 by hkong             #+#    #+#             */
/*   Updated: 2023/05/10 22:02:31 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define CLOSE "\x1B[0m"

class ScalarConverter {
	private:
		
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter& scalarConverter);
		ScalarConverter& operator=(ScalarConverter& scalarConverter);
		~ScalarConverter();

		static void convert(std::string param);	
};

#endif