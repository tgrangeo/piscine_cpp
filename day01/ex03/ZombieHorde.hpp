/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:24:31 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 16:34:47 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_
# define _ZOMBIEHORDE_

#include "Zombie.hpp"
#include <stdlib.h> 
#include <time.h>

class ZombieHorde{

	public:
	//constructor and destructor
		ZombieHorde(void);
		ZombieHorde(int n);
		~ZombieHorde(void);
	//Getter and Setter
		
	//Other
		void Horde_cry(void);
	private:
		int 	_n;
		Zombie	*_z;

};

#endif