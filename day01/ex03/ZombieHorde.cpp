/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:48:22 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 16:35:56 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void){
}

ZombieHorde::ZombieHorde(int n):_n(n){
	std::string		tab_name[11];

	tab_name[0] = "Lloris";
	tab_name[1] = "Pavard";
	tab_name[2] = "Varane";
	tab_name[3] = "Kimpembe";
	tab_name[4] = "Hernández";
	tab_name[5] = "Rabiot";
	tab_name[6] = "Kanté";
	tab_name[7] = "Pogba";
	tab_name[8] = "Benzema";
	tab_name[9] = "Griezmann";
	tab_name[10] = "Mbappé";
	srand(time(NULL));
	int r = rand()%11;
	_z = new Zombie[n];
	for (int i = 0; i < n; i++){
		_z[i].SetType("francais");
		_z[i].SetName(tab_name[r]);
		r = rand()%11;
	}
}

ZombieHorde::~ZombieHorde(void){
	delete [] _z;
}

void		ZombieHorde::Horde_cry(void){
	for (int i = 0; i < _n; i++)
		_z[i].advert();
}
