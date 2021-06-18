/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:57:58 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 15:10:54 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){
	_type = "normal";
}

ZombieEvent::~ZombieEvent(void){
}

void	ZombieEvent::SetZombieType(std::string str){
	_type = str;
}

Zombie	*ZombieEvent::newZombie(std::string name){
	Zombie	*z;

	z = new Zombie();

	z->SetName(name);
	z->SetType(_type);
	return (z);
}

Zombie	*ZombieEvent::randomChump(void){
	Zombie	*z;
	std::string		tab_name[5];

	tab_name[0] = "pikachu";
	tab_name[1] = "salameche";
	tab_name[2] = "bulbizare";
	tab_name[3] = "carapuce";
	tab_name[4] = "leviator";
	srand(time(NULL));
	int r = rand()%5;
	z = newZombie(tab_name[r]);
	z->advert();
	return (z);
}