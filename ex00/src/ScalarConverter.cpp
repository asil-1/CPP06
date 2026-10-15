/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:57:52 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/14 16:54:14 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }
ScalarConverter	&ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }
ScalarConverter::~ScalarConverter() {}

//nan est diff de lui même
// + et - inf std::numeric_limits<type>::infinity()
// + et - inf std::numeric_limits<type>::min ou max()
//ne pas afficher les char < 31 || > 126 :> std::isprint(char)

void	ScalarConverter::convert(const std::string& literal) {
	if (literal.empty() || !(isChar(literal) || isValidNnumber(literal)
		|| isNan(literal) || isInf(literal)))
		{
			affError();
			return ;
		}
	double	value;

	if (isChar(literal))
		value = static_cast<double>(literal[0]);
	else
		value = std::strtod(literal.c_str(), NULL);
	affChar(value);
	affInt(value);
	affFloat(value);
	affDouble(value);
}
