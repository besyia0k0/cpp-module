/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:41:51 by hkong             #+#    #+#             */
/*   Updated: 2023/06/03 17:09:21 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		MutantStack() { }
		MutantStack(const MutantStack& mutantStack): std::stack<T>(mutantStack) { }
		MutantStack& operator=(const MutantStack& mutantStack) {
			if (this != &mutantStack)
				this->c = mutantStack.c;
			return *this;
		}
		~MutantStack() { }

		iterator begin() { return this->c.begin(); }
		const_iterator begin() const { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		const_iterator end() const { return this->c.end(); }
		reverse_iterator rbegin() { return this->c.rbegin(); }
		const_reverse_iterator rbegin() const { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }
		const_reverse_iterator rend() const { return this->c.rend(); }
};


#endif