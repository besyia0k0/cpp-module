/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:30:52 by hkong             #+#    #+#             */
/*   Updated: 2023/03/09 18:58:25 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <ostream>
# include <cmath>

class Fixed {
	private:
		int	value;
		static const int	fractional_bit = 8;
	
	public:
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed(const int value_);
		Fixed(const float value_);
		~Fixed();
		Fixed&	operator=(const Fixed& fixed);
		
		bool		operator>(const Fixed& fixed) const;
		bool		operator<(const Fixed& fixed) const;
		bool		operator>=(const Fixed& fixed) const;
		bool		operator<=(const Fixed& fixed) const;
		bool		operator==(const Fixed& fixed) const;
		bool		operator!=(const Fixed& fixed) const;

		Fixed		operator+(const Fixed& fixed) const;
		Fixed		operator-(const Fixed& fixed) const;
		Fixed		operator*(const Fixed& fixed) const;
		Fixed		operator/(const Fixed& fixed) const;

		Fixed&	operator++();			//prefix
		Fixed		operator++(int);	//postfix
		Fixed&	operator--();			//prefix
		Fixed		operator--(int);	//postfix

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&	min(Fixed& num1, Fixed& num2);
		static const Fixed&	min(const Fixed &num1, const Fixed &num2);
		static Fixed&	max(Fixed& num1, Fixed& num2);
		static const Fixed&	max(const Fixed &num1, const Fixed &num2);
};

std::ostream& operator<<(std::ostream &o, const Fixed &fixed);

#endif