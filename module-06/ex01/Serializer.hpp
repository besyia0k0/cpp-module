/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 01:43:15 by hkong             #+#    #+#             */
/*   Updated: 2023/05/27 21:04:43 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

# define YELLOW "\x1B[33m"
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define CLOSE "\x1B[0m"

typedef struct s_data {
	char		data_char;
	int			data_int;
	double	data_double;
} Data;

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer& serializer);
		Serializer& operator=(const Serializer& serializer);

	public:
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
};

#endif