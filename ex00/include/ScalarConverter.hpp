/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:53:54 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/15 18:59:31 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <limits>
#include <cmath>

class	ScalarConverter {
	public:
		static void	convert(const std::string& literal);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter &operator=(const ScalarConverter& other);
		~ScalarConverter();
};

/*parse*/
bool	isChar(const std::string& s);
bool	isNan(const std::string& s);
bool	isInf(const std::string& s);
bool	isValidNumber(const std::string& s);

/*aff*/
void	affChar(double value);
void	affInt(double value);
void	affFloat(double value);
void	affDouble(double value);
void	affError();

#endif