/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:55:59 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 18:43:20 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void){
}

HumanA::HumanA(std::string name, Weapon &w): _Name(name), _w(w){
}

void	HumanA::Attack(void){
	std::cout << _Name << " attacks with his " << _w.GetType() << std::endl;
}