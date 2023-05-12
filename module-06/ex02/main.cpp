/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:18:21 by hkong             #+#    #+#             */
/*   Updated: 2023/05/13 02:47:19 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base* generate(void) {
	std::string arr[3] = {"A", "B", "C"};
	Base* base = NULL;
	int	random_num;

	std::srand((unsigned int)std::time(NULL)); // use current time as seed for random generator
	try {
		random_num = std::rand() % 3;
		switch (random_num) {
			case 0:
				base = new A();
				break;
			case 1:
				base = new B();
				break;
			case 2:
				base = new C();
				break;
		}
		std::cout << "** Class " << arr[random_num] << " generated! **" << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return base;
}

void identify(Base* p) {
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "[ Identify: pointer ] It is A class" << std::endl;
	else if (b)
		std::cout << "[ Identify: pointer ] It is B class" << std::endl;
	else if (c)
		std::cout << "[ Identify: pointer ] It is C class" << std::endl;
	else
		std::cout << "[ Identify: pointer ] It is Base class" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "[ Identify: reference ] It is A class" << std::endl;
		return ;
	} catch (std::bad_cast& e) { }
	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "[ Identify: reference ] It is B class" << std::endl;
		return ;
	} catch (std::bad_cast& e) { }
	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "[ Identify: reference ] It is C class" << std::endl;
		return ;
	} catch (std::bad_cast& e) { }
	std::cout << "[ Identify: reference ] It is Base class" << std::endl;
}

int main(void) {
	Base* base = new Base();
	Base* gen_base;
	
	gen_base = generate();
	identify(base);
	identify(*base);
	identify(gen_base);
	identify(*gen_base);
}