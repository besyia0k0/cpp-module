/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:56:05 by hkong             #+#    #+#             */
/*   Updated: 2023/05/27 21:04:24 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define CLOSE "\x1B[0m"

template<typename T>
class Array {
	private:
		T *arr;
		unsigned int arrSize;

	public:
		Array(): arrSize(0) {
			std::cout << GREEN << "+ [ Array ] default constructor called +" << CLOSE << std::endl;
			arr = new T[arrSize]();
		}
		Array(unsigned int _arrSize): arrSize(_arrSize) {
			std::cout << GREEN << "+ [ Array ] arrSize constructor called +" << CLOSE << std::endl;
			arr = new T[arrSize]();
		}
		Array(const Array& array): arrSize(array.arrSize) {
			std::cout << GREEN << "+ [ Array ] copy constructor called +" << CLOSE << std::endl;
			arr = new T[arrSize]();
			for (unsigned int i = 0; i < arrSize; i++)
				arr[i] = array.arr[i];
		}
		Array& operator=(const Array& array) {
			std::cout << GREEN << "= [ Array ] copy assignment operator called =" << CLOSE << std::endl;
			if (arr == array.arr) {
				arrSize = array.arrSize;
				return *this;
			}
			if (arrSize != array.arrSize) {
				delete[] arr;
				arr = new T[array.arrSize]();
			}
			arrSize = array.arrSize;
			for (unsigned int i = 0; i < arrSize; i++)
				arr[i] = array.arr[i];
			return *this;
		}
		~Array() {
			std::cout << GREEN << "- [ Array ] destructor called -" << CLOSE << std::endl;
			delete[] arr;
		}

		T& operator[](size_t index) {
			if (index < 0 || index >= arrSize)
				throw std::exception();
			return arr[index];
		}
		const T& operator[](size_t index) const {
			if (index < 0 || index >= arrSize)
				throw std::exception();
			return arr[index];
		}
		unsigned int size() const { return arrSize; }

		void printArray() const {
			std::cout << "[ ";
			for (unsigned int i = 0; i < arrSize; i++)
				std::cout << arr[i] << " ";
			std::cout << "]" << std::endl;
		}
};

#endif