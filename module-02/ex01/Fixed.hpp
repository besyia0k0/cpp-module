/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:30:52 by hkong             #+#    #+#             */
/*   Updated: 2023/03/02 21:53:49 by hkong            ###   ########.fr       */
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
		Fixed(const Fixed &fixed);
		Fixed(const int value_);
		Fixed(const float value_);
		~Fixed();
		Fixed& operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &o, const Fixed &fixed);

#endif