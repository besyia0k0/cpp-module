/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:30:54 by hkong             #+#    #+#             */
/*   Updated: 2023/03/03 16:46:37 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* constructor/destructor */

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
	value = static_cast<int>(roundf(value_ * (1 << fractional_bit)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/* overloading operators */

/* copy assignment operator */
Fixed& Fixed::operator=(const Fixed &fixed) {
	value = fixed.getRawBits();
	return *this;
}

/* comparison operators */
bool Fixed::operator>(const Fixed &fixed) {
	return this->toFloat() > fixed.toFloat();
}

bool Fixed::operator<(const Fixed &fixed) {
	return this->toFloat() < fixed.toFloat();
}

bool Fixed::operator>=(const Fixed &fixed) {
	return this->toFloat() >= fixed.toFloat();
}

bool Fixed::operator<=(const Fixed &fixed) {
	return this->toFloat() <= fixed.toFloat();
}

bool Fixed::operator==(const Fixed &fixed) {
	return this->toFloat() == fixed.toFloat();

}

bool Fixed::operator!=(const Fixed &fixed) {
	return this->toFloat() != fixed.toFloat();
}

/* arithmetic operators */
Fixed Fixed::operator+(const Fixed &fixed) {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) {
	return Fixed(this->toFloat() / fixed.toFloat());
}

/* increment/decrement operator */
// prefix
Fixed&	Fixed::operator++() {
	value += 1;
	return *this;
}

// postfix
Fixed	Fixed::operator++(int) {
	Fixed current(*this);

	value += 1;
	return current;
}

// prefix
Fixed&	Fixed::operator--() {
	value -= 1;
	return *this;
}

// postfix
Fixed	Fixed::operator--(int) {
	Fixed current(*this);

	value -= 1;
	return current;
}

/* functions */

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

/* min/max function overloading */
static Fixed	min(Fixed& num1, Fixed& num2) {

}

static Fixed	min(const Fixed& num1, const Fixed& num2) {
	
}

static Fixed	max(Fixed& num1, Fixed& num2) {

}

static Fixed	max(const Fixed& num1, const Fixed& num2) {
	
}


std::ostream& operator<<(std::ostream &output, const Fixed &fixed) {
	output << fixed.toFloat();
	return output;
}