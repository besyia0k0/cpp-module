/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:51:15 by hkong             #+#    #+#             */
/*   Updated: 2023/01/20 15:19:06 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argv, char *argc[])
{
	if (argv == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i  = 0; i < argv - 1; i++)
	{
		std::string str(argc[i + 1]);
		for (std::basic_string<char>::size_type j = 0; j < str.length(); j++)
			std::cout << (char)toupper(str.at(j));
	}
	std::cout << std::endl;
	return (0);
}