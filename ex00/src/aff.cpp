/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:45:11 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/15 20:05:38 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	affChar(double value) {
	std::cout << "char: ";
	if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
		std::cout << "impossible" << std::endl;
	else if (value < 31 || value > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
}

void	affInt(double value) {
	std::cout << "int: ";
	if ((value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		|| std::isnan(value) || std::isinf(value))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void	affFloat(double value) {
	std::cout << "float: ";
	float	f;

	f = static_cast<float>(value);
	if (std::isinf(value) && value > 0)
		std::cout << '+';
	std::cout << f;
	if (f == static_cast<int>(f))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	affDouble(double value) {
	std::cout << "double: ";
	if (std::isinf(value) && value > 0)
		std::cout << '+';
	std::cout << value << std::endl;
}

void	affError() {
	std::cout << "char: impossible" << std::endl
	<< "int: impossible" << std::endl
	<< "float: impossible" << std::endl
	<< "double: impossible" << std::endl;
}
