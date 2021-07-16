/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 12:54:17 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/16 13:38:24 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>

struct Data
{
	std::string		str;
	int				n;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t n;
	n = reinterpret_cast<uintptr_t>(ptr);
	return n;
}

Data		*deserialize(uintptr_t raw)
{
	Data *d;
	d = reinterpret_cast<Data *>(raw);
	return d;
}

int			main( void )
{
	Data *d = new Data;
	d->n = -42;
	d->str = "Alors la zone";
	std::cout << "Data avant serialize:" << std::endl;
	std::cout << "int: " << d->n << std::endl;
	std::cout << "str: " << d->str << std::endl;
	std::cout << std::endl;
	uintptr_t n = serialize(d);
	std::cout << "Data serialize:" << std::endl;
	std::cout << n << std::endl;
	d = deserialize(n);
	std::cout << std::endl;
	std::cout << "Data apres deserialize:" << std::endl;
	std::cout << "int: " << d->n << std::endl;
	std::cout << "str: " << d->str << std::endl;
	delete d;
	return 0;
}