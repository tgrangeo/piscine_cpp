/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:02:07 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 18:50:29 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

int main()
{
	//{
	//Weapon club = Weapon("crude spiked club");
	//HumanA bob("Bob", club);
	//bob.Attack();
	//club.SetType("some other type of club");
	//bob.Attack();

	//}
	//{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.SetType("some other type of club");
	jim.attack();
	//}
}