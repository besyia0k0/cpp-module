/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:43:20 by hkong             #+#    #+#             */
/*   Updated: 2023/05/13 02:44:25 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::~A() {
	std::cout << GREEN << "- [ A ] destructor called -" << CLOSE << std::endl;
}