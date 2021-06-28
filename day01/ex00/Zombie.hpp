/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:56:56 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/28 10:57:44 by tgrangeo         ###   ########lyon.fr   */
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
	//Others
		void		announce(void);
		Zombie		*newZombie(std::string name);
		void		randomChump(std::string name);

	private:
		std::string		_name;
};

#endif