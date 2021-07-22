/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:33:05 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/22 15:44:10 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int			main(void)
{
	Span sp = Span(10);
	try
	{
		sp.addNumber(12);
		sp.addNumber(3);
		sp.addNumber(-17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printNumber();
	}
	catch(const std::out_of_range & of)
	{
		std::cerr << of.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Shortest = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest = " << sp.longestSpan() << std::endl;
	}
	catch(const std::length_error & le)
	{
		std::cerr << le.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	Span	mySpan(150);
	try
	{
		mySpan.generateNumberRange(-1, 148);
		mySpan.printNumber();
	}
	catch(const std::out_of_range & of)
	{
		std::cerr << of.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Shortest = " << mySpan.shortestSpan() << std::endl;
		std::cout << "Longest = " << mySpan.longestSpan() << std::endl;
	}
	catch(const std::length_error & le)
	{
		std::cerr << le.what() << std::endl;
	}
	std::cout << std::endl;

	
	

	//assignation et copy
	Span ss(10);
	ss.generateNumberRange(0, 9);
	Span s(ss);
	s.printNumber();
	std::cout << std::endl;
	Span sss = s;
	sss.printNumber();
	std::cout << std::endl << std::endl;
	
	//cas d erreur
	// short et longest span sur vector size 1 ou 0
	std::cout << std::endl;
	Span	mySpan3(1);
	try
	{
		mySpan3.addNumber(42);
		mySpan3.printNumber();
	}
	catch(const std::out_of_range & of)
	{
		std::cerr << of.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Longest = " << mySpan3.longestSpan() << std::endl;
		std::cout << "Shortest = " << mySpan3.shortestSpan() << std::endl;
	}
	catch(const std::length_error & le)
	{
		std::cerr << le.what() << std::endl;
	}
}
