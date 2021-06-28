/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:31:32 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/24 13:12:24 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <ctime>
#include <unistd.h>



int	main(void){
	
	Zombie	zomb;
	Zombie	*pokemon;
	
	zomb.SetName("sacha");
	zomb.announce();
	
	std::cout << std::endl;
	
	pokemon = zomb.newZombie("roucool");
	pokemon->announce();
	delete pokemon;
	
	std::cout << std::endl;
	
	pokemon = zomb.newZombie("Magmar");
	pokemon->announce();
	delete pokemon;
	
	std::cout << std::endl;
	
	zomb.randomChump("Leviator");
	
	return (0);
}