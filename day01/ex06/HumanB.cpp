/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:45:05 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/21 10:45:27 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str): _name(str){
}

HumanB::~HumanB(void){
}

void	HumanB::attack(void){
	std::cout << _name << " attacks with his " << _w->GetType() << std::endl;
}

void	HumanB::setWeapon(Weapon &arme){
	_w = &arme;
}