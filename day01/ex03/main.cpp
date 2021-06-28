/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:02:07 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/24 17:25:27 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
	{

	std::cout << "HumanA :" << std::endl;
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.Attack();
	club.SetType("some other type of club");
	bob.Attack();
	std::cout << std::endl;
	}
	{
	std::cout << "HumanB :" << std::endl;
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.SetType("some other type of club");
	jim.attack();
	std::cout << std::endl;
	}
}