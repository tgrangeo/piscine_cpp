/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:57:58 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/28 11:09:56 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Constructor Zombie called" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "Destructor Zombie called for "<< _name << std::endl;
}

std::string	Zombie::GetName(void){
	return _name;
}

void		Zombie::SetName(std::string str){
	_name = str;
}

void		Zombie::announce(void){
	std::cout << "<" << GetName() << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie		*Zombie::newZombie(std::string name){
	Zombie	*z;

	z = new Zombie();

	z->SetName(name);
	return (z);
}

void		Zombie::randomChump(std::string name){
	Zombie	z;

	z.SetName(name);
	z.announce();
}
