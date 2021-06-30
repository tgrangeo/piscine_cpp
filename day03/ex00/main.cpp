/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:47:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/06/30 09:43:44 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap Clap("Paul");
	ClapTrap Clap2("Pierre");
	std::cout << std::endl;
	
	Clap.attack(Clap2.getName());
	std::cout << std::endl;
	
	Clap2.beRepaired(100);
	std::cout << std::endl;

	Clap2.takeDamage(50);
	std::cout << std::endl;

	Clap2.takeDamage(50);
	std::cout << std::endl;
	return (0);
}
