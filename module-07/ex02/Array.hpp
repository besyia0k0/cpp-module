/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:56:05 by hkong             #+#    #+#             */
/*   Updated: 2023/05/20 12:05:49 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define CLOSE "\x1B[0m"

template<typename T>
class Array {
	private:
		T *array;
		unsigned int size;

	public:
		Array();
		Array(unsigned int _size);
		Array(Array& _array);
		Array& operator=(Array& _array);
		~Array();
};

#endif