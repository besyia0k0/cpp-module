/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:53:08 by hkong             #+#    #+#             */
/*   Updated: 2023/06/10 11:05:55 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void rpn(std::string str) {
	std::stringstream ss(str);
	std::string tmp;

	while (ss >> tmp) {
		if (isdigit(tmp))
	}

}