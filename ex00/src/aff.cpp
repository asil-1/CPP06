/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:45:11 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/14 16:59:14 by ldepenne         ###   ########.fr       */
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
	if ((value > std::numeric_limits<int>::max()
		&& value < std::numeric_limits<int>::min())
		||(value == std::numeric_limits<float>::max()))
		std::cout << "impossible" << std::endl; //attention float max marche pas, ça overflow le int
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void	affFloat(double value) {
	std::cout << "float: ";
	if (value > std::numeric_limits<float>::max()
		&& value < std::numeric_limits<float>::min())
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
	float	f;

	f = static_cast<float>(value);
	std::cout << f;
	if (f == static_cast<int>(f)) // verif si pas inf
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	affDouble(double value) {
	std::cout << "double: " << value << std::endl;
}

void	affError() {
	std::cout << "char: impossible" << std::endl
	<< "int: impossible" << std::endl
	<< "float: impossible" << std::endl
	<< "double: impossible" << std::endl;
}
