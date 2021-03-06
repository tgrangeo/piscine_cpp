/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:57:16 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/24 17:10:34 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brain_ptr = &brain;
	std::string &brain_ref = brain;

	std::cout << std::endl;
	std::cout << "Adresse de Brain:     " << &brain << std::endl;
	std::cout << "Adresse de Brain_Ref: " << &brain_ref << std::endl;
	std::cout << "Adresse de Brain_Ptr: " << &brain_ptr << std::endl;
	std::cout << std::endl;
	std::cout << "Brain:     " << brain << std::endl;
	std::cout << "Brain_Ref: " << brain_ref << std::endl;
	std::cout << "Brain_Ptr: " << *brain_ptr << std::endl;
	std::cout << std::endl;
	return (0);
}