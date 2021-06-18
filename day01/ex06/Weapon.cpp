/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:52:47 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 18:05:56 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
}

Weapon::~Weapon(void){
}

Weapon::Weapon(std::string type):_type(type){
}

std::string		&Weapon::GetType(void){
	std::string	&type_ref = _type;
	return type_ref;
}

void			Weapon::SetType(std::string str){
	_type = str;
}