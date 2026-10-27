/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:27:10 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/27 14:11:20 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base	*generate(void) {
	const int	randomValue = std::rand() % 3;

	if (randomValue == 0)
		return new A();
	if (randomValue == 1)
		return new B();
	return new C();
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "The type is unidentify" << std::endl;
	return;
}

void	identify(Base &p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	} catch(std::exception &e) {};
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception &e) {};
	try {
		std::cout << "C" << std::endl;
	} catch (std::exception &e) {};
}

int	main()
{
	std::srand(std::time(NULL));
	Base	*random = generate();
	identify(random);
	identify(*random);

	delete random;
}
