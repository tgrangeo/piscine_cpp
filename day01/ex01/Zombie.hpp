/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:56:56 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/28 11:04:09 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP
# define _ZOMBIE_HPP

#include <stdlib.h>     //srand, rand
#include <iostream>
#include <string>
#include <time.h>

class Zombie{

	public:
	//constructor and destructor
		Zombie(void);
		~Zombie(void);
	//Getter and Setter
		std::string	GetName(void);
		void		SetName(std::string);
		void		SetNumber(int n);
	//Others
		void		announce(void);
		Zombie		*newZombie(std::string name);
		void		randomChump(std::string name);
		void		Horde_cry(Zombie *horde);
		Zombie		*ZombieHorde(int n, std::string name);

	private:
		std::string		_name;
		int				_n;
};

#endif