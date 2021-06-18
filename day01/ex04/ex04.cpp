/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:57:16 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 17:00:09 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brain_ptr = &brain;
	std::string &brain_ref = brain;

	std::cout << *brain_ptr << std::endl;
	std::cout << brain_ref << std::endl;
	return (0);
}