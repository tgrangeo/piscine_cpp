/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:16:18 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/28 11:07:50 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;

	std::cout << std::endl;

	horde = NULL;
	horde = horde->ZombieHorde(3, "George");
	horde->Horde_cry(horde);
	delete [] horde;

	std::cout << std::endl;

	horde = NULL;
	horde = horde->ZombieHorde(3, "");
	horde->Horde_cry(horde);
	delete [] horde;

	std::cout << std::endl;

	horde = NULL;
	horde = horde->ZombieHorde(-36, "Momo");
	horde->Horde_cry(horde);
	delete [] horde;

	std::cout << std::endl;

	horde = NULL;
	horde = horde->ZombieHorde(0, "Momo");
	horde->Horde_cry(horde);
	delete [] horde;

	std::cout << std::endl;
	return 0;
}
