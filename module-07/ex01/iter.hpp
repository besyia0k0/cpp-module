/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:18:49 by hkong             #+#    #+#             */
/*   Updated: 2023/05/20 11:52:57 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define CLOSE "\x1B[0m"

template <typename T>
void iter(T* array, size_t size, void (*func)(T&)) {
	for (size_t i = 0; i < size; i++) {
		func(array[i]);
	}
}

template <typename T>
void iter(const T* array, size_t size, void (*func)(const T&)) {
	for (size_t i = 0; i < size; i++) {
		func(array[i]);
	}
}

template <typename T>
void printAll(T& element) {
	std::cout << "[ " << element << " ]" << std::endl;
}

template <typename T>
void increase(T& element) {
	element++;
}

#endif