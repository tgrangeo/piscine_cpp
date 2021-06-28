/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:48:22 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/28 11:07:12 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::SetNumber(int n){
	if (n > 0)
		_n = n;
}

Zombie		*Zombie::ZombieHorde(int n, std::string name){
	Zombie	*horde = NULL;

	if (n <= 0){
		std::cerr << "not enough Zombie" << std::endl;
		return NULL;	
	}
	horde = new Zombie[n];
	horde->SetNumber(n);
	for (int i = 0; i < n; i++){
		if (name == "\0")
			horde[i].SetName("Zombie");
		else
			horde[i].SetName(name);
	}
	return horde;
}

void		Zombie::Horde_cry(Zombie *horde){
	if (horde != NULL){
		for (int i = 0; i < _n; i++){
				horde[i].announce();
		}
	}
}
