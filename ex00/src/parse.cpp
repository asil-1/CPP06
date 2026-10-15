/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:28:49 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/15 19:21:21 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isChar(const std::string& s) {
	if (s.length() == 1 && !isdigit(s[0]))
		return (true);
	return (false);
}

bool	isNan(const std::string& s) {
	if (s == "nan" || s == "nanf" || s != s)
		return (true);
	return (false);
}

bool	isInf(const std::string& s) {
	if (s == "inf" || s == "+inf" || s == "-inf")
		return (true);
	if (s == "inff" || s == "+inff" || s == "-inff")
		return (true);
	return (false);
}

bool	isValidNumber(const std::string& s) {
	int	i = 0;
	int	point = 0;
	int power = 0;

	if (s[i] == '-')
		i++;
	for (; s[i]; i++) {
		if (s[i] == 'e' && (s[i+1] == '+' || s[i+1] == '-'))
		{
			i += 2;
			power++;
			if (power > 1)
				return (false);
			continue ;
		}
		if (s[i] == '.')
		{
			if (point > 0)
				return (false);
			point++;
		}
		else if (!isdigit(s[i]))
		{
			if (s[i] == 'f' && !s[i+1])
				return (true);
			return (false);
		}
	}
	return (true);
}
