/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:15:31 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/26 18:07:24 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& other) { (void)other; }

Serializer	&Serializer::operator=(const Serializer& other) { (void)other; return *this; }

Serializer::~Serializer() {}

uintptr_t	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
