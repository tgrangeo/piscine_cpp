/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:31:01 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 15:16:38 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::~Zombie(void){
}

std::string	Zombie::GetName(void){
	return (_name);
}

std::string	Zombie::GetType(void){
	return (_type);
}

void		Zombie::SetType(std::string str){
	_type = str;
}

void		Zombie::SetName(std::string str){
	_name = str;
}

void		Zombie::advert(void){
	std::cout << GetName() << " de type " <<GetType() << " > Pooooookkkkkeeeemmmmooonnnn !!! attrapez-les tous!" << std::endl;
}