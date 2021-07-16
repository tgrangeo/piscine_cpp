/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:47:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/07/02 10:18:07 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	//Ex00
	
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

	//Ex01
	
	ScavTrap Scav("Roberto");
	std::cout << std::endl;
	Scav.guardGate();
	std::cout << std::endl;
	Scav.beRepaired(50);
	std::cout << std::endl;
	Scav.takeDamage(50);
	std::cout << std::endl;
	Scav.attack(Clap2.getName());
	std::cout << std::endl;

	//Ex02

	FragTrap Frag("Jean-Jacque");
	std::cout << std::endl;
	Frag.highFivesGuys();
	std::cout << std::endl;
	Frag.beRepaired(50);
	std::cout << std::endl;
	Frag.takeDamage(50);
	std::cout << std::endl;
	Frag.attack(Clap2.getName());
	std::cout << std::endl;

	//Ex03

	DiamondTrap Diam("Didier");
	std::cout << std::endl;
	Diam.WhoAmI();
	std::cout << std::endl;
	Diam.attack("Antonin");
	std::cout << std::endl;
	Diam.guardGate();
	std::cout << std::endl;
	Diam.highFivesGuys();
	std::cout << std::endl;
	Diam.beRepaired(30);
	std::cout << std::endl;
	
	return (0);
}
