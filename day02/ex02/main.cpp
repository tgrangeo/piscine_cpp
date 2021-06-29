/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:52:23 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/29 13:43:22 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	
	Fixed f1(789.321f);
	Fixed f2(789.465f);

	std::cout << "f1 is " << f1 << std::endl;
	std::cout << "f2 is " << f2 << std::endl;
	std::cout << std::endl;
	
	float a = f1.toFloat();
	float b = f2.toFloat();
	
	//addition
	
	std::cout << "in main " << a + b << std::endl;
	std::cout << "in fixed " << f1 + f2 << std::endl;
	std::cout << std::endl;
	
	//soustraction
	
	std::cout << "in main " << a - b << std::endl;
	std::cout << "in fixed " << f1 - f2 << std::endl;
	std::cout << std::endl;
	
	//multiplication
	
	std::cout << "in main " << a * b << std::endl;
	std::cout << "in fixed " << f1 * f2 << std::endl;
	std::cout << std::endl;
	
	//division
	
	std::cout << "in main " << a / b << std::endl;
	std::cout << "in fixed " << f1 / f2 << std::endl;
	std::cout << std::endl;
	
	//operator < 
	
	if (a < b)
		std::cout << "a < b" << std::endl;
	else
		std::cout << "a > b" << std::endl;
	if (f1 < f2)
		std::cout << "f1 < f2" << std::endl;
	else
		std::cout << "f1 > f2" << std::endl;
	
	std::cout << std::endl;
	
	//operator >
	
	if (a > b)
		std::cout << "a < b" << std::endl;
	else
		std::cout << "a > b" << std::endl;
	if (f1 > f2)
		std::cout << "f1 < f2" << std::endl;
	else
		std::cout << "f1 > f2" << std::endl;
	
	std::cout << std::endl;
	
	//operator >=
	
	if (a >= b)
		std::cout << "a <= b" << std::endl;
	else
		std::cout << "a >= b" << std::endl;
	if (f1 >= f2)
		std::cout << "f1 <= f2" << std::endl;
	else
		std::cout << "f1 >= f2" << std::endl;
	
	std::cout << std::endl;
	
	//operator <=
	
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	else
		std::cout << "a >= b" << std::endl;
	if (f1 <= f2)
		std::cout << "f1 <= f2" << std::endl;
	else
		std::cout << "f1 >= f2" << std::endl;
	
	std::cout << std::endl;
	
	//operator == 
	
	if (a == b)
		std::cout << "a == b" << std::endl;
	else
		std::cout << "a != b" << std::endl;
	if (f1 == f2)
		std::cout << "f1 == f2" << std::endl;
	else
		std::cout << "f1 != f2" << std::endl;
	
	std::cout << std::endl;
	
	//operator !=
	
	if (a != b)
		std::cout << "a != b" << std::endl;
	else
		std::cout << "a == b" << std::endl;
	if (f1 != f2)
		std::cout << "f1 != f2" << std::endl;
	else
		std::cout << "f1 == f2" << std::endl;
	
	std::cout << std::endl;
	
	//min et max
	
	Fixed &c = f1.min(f1,f2);
	std::cout << "min between " << f1 << " and " << f2 << " is "<< c << std::endl;
	Fixed &d = f1.max(f1,f2);
	std::cout << "max between " << f1 << " and " << f2 << " is "<< d << std::endl;
	
	std::cout << std::endl;
	
	Fixed const f11(123.12f);
	Fixed const f22(143.12f);
	
	//min et max const 
	
	Fixed &e = f1.min(f11,f22);
	std::cout << "min between " << f11 << " and " << f22 << " is "<< e << std::endl;
	Fixed &f = f1.max(f11,f22);
	std::cout << "max between " << f11 << " and " << f22 << " is "<< f << std::endl;
	
	//operator ++
	
	Fixed h = 0;
	std::cout << std::endl;
	std::cout << ++h << std::endl;
	std::cout << h++ << std::endl;
	std::cout << h << std::endl;
	std::cout << std::endl;
	
	//operator --
	
	std::cout << std::endl;
	std::cout << --h << std::endl;
	std::cout << h-- << std::endl;
	std::cout << h << std::endl;
	std::cout << std::endl;
	
	return 0;
}