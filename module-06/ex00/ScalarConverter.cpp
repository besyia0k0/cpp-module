/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:52:23 by hkong             #+#    #+#             */
/*   Updated: 2023/05/18 16:13:30 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << GREEN << "+ [ ScalarConverter ] default constructor called +" << CLOSE << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter& scalarConverter) {
	std::cout << GREEN << "+ [ ScalarConverter ] copy constructor called +" << CLOSE << std::endl;
	(void)scalarConverter; /* do nothing */
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& scalarConverter) {
	std::cout << GREEN << "= [ ScalarConverter ] copy assignment operator called =" << CLOSE << std::endl;
	(void)scalarConverter; /* do nothing */
	return *this;
}

ScalarConverter::~ScalarConverter() {
	std::cout << GREEN << "- [ ScalarConverter ] destructor called -" << CLOSE << std::endl;
}

void	ScalarConverter::convert(std::string param_s) {
	const char	*param_c = param_s.c_str();
	char	*endptr;
	double	num;

	/* get double num */
	if (param_s.length() == 3 && param_s.front() == '\'' && param_s.back() == '\'')
		num = static_cast<double>(param_c[1]);
	else {
		num = std::strtod(param_c, &endptr);
		if (!(endptr[0] == 0 || (endptr[0] == 'f' && endptr[1] == 0 && param_s.find_first_of('.', 0) != std::string::npos \
				&& param_s.find_first_of('.', 0) == param_s.find_last_of('.', param_s.length())))) {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
	}
	/* print char */
	std::cout << "char: ";
	if (!isinf(num) && num < 32)
		std::cout << "Non displayable" << std::endl;
	else if (isnan(num) || isinf(num))
		std::cout << "impossible" << std::endl;
	else
		std::cout << "\'" << static_cast<char>(num) << "\'" << std::endl;

	/* print int */
	std::cout << "int: ";
	if (isnan(num) || isinf(num))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;

	/* print float */
	std::cout << "float: ";
	if (isinf(num) && num > 0)
		std::cout << "+";
	std::cout << static_cast<float>(num);
	if (static_cast<float>(num) - static_cast<int>(num) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	/* print double */
	std::cout << "double: ";
	if (isinf(num) && num > 0)
		std::cout << "+";
	std::cout << num;
	if (num - static_cast<int>(num) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}
