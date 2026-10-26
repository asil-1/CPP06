/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 22:48:01 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/26 18:04:18 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void	printData(Data *D)
{
	std::cout << "Data" << std::endl
		<< "int: " << D->nb << std::endl
		<< "string: " << D->str << std::endl;
}

int	main(void)
{
	uintptr_t	uiCast;

	Data	*D = new Data;
	{
		D->nb = 3;
		D->str = "test";

		printData(D);
		uiCast = Serializer::serialize(D);
		std::cout << std::endl << "convert to uint_ptr" << std::endl
			<< uiCast << std::endl;

		Data	*result = Serializer::deserialize(uiCast);
		std::cout << std::endl << "convert to Data*" << std::endl;
		printData(result);
	}
	std::cout << std::endl;
	{
		D->nb = -1;
		D->str = "";

		printData(D);
		uiCast = Serializer::serialize(D);
		std::cout << std::endl << "convert to uint_ptr" << std::endl
			<< uiCast << std::endl;

		Data	*result = Serializer::deserialize(uiCast);
		std::cout << std::endl << "convert to Data*" << std::endl;
		printData(result);
	}
	delete D;
}

