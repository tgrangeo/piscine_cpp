/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:56:56 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 16:13:06 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_HPP
# define _ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <stdlib.h>     //srand, rand
#include <time.h>		

class ZombieEvent{

	public:
	//constructor and destructor
		ZombieEvent(void);
		~ZombieEvent(void);
	//Getter and Setter
		void	SetZombieType(std::string str);
	//Other
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);

	private:
		std::string		_type;
};

#endif