/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:31:32 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 15:14:32 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>
#include <unistd.h>



int	main(void){
	
	Zombie	*zomb;
	
	zomb->SetName("sacha");
	zomb->SetType("dresseur");
	zomb->advert();

	ZombieEvent	horde;
	
	zomb = horde.newZombie("roucool");
	zomb->advert();
	delete zomb;

	horde.SetZombieType("pokemon feu");
	zomb = horde.newZombie("Magmar");
	zomb->advert();
	delete zomb;

	horde.SetZombieType("random");
	zomb = horde.randomChump();
	delete zomb;
	
	return (0);
}