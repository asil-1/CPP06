/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:41:38 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/14 11:46:31 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "il manque un argument Lisa" << std::endl;
		return 0;
	}
	ScalarConverter* test = NULL;

	test->convert(av[1]);
}
