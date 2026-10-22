/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:07:39 by ldepenne          #+#    #+#             */
/*   Updated: 2026/10/22 18:25:07 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <cstdint>

class	Data;

class	Serialize {
	public:
		Serialize();
		Serialize(const Serialize& other);
		Serialize &operator=(const Serialize& other);
		~Serialize();

	private:
		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);
};

#endif
