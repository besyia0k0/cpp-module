/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:30:54 by hkong             #+#    #+#             */
/*   Updated: 2023/03/02 22:00:39 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int value_) {
	std::cout << "Int constructor called" << std::endl;
	value = value_ << fractional_bit;
}

Fixed::Fixed(const float value_) {
	std::cout << "Float constructor called" << std::endl;
	value = roundf(value_ * (1 << fractional_bit));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	value = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw) {
	value = raw;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(value) / (1 << fractional_bit);
}

int	Fixed::toInt(void) const {
	return value >> fractional_bit;
}

std::ostream& operator<<(std::ostream &o, const Fixed &fixed) {
	o << fixed.toFloat();
	return o;
}