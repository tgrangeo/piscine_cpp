/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:52:23 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/22 18:23:49 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	a.setRawBits(5);
	Fixed b(a);
	Fixed c;
	c = b;
	a = b;
	std::cout << "A " << a.getRawBits() << std::endl;
	std::cout << "B " << b.getRawBits() << std::endl;
	std::cout << "C " << c.getRawBits() << std::endl;
	return 0;
}