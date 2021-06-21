/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:44:20 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/21 10:44:30 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

#include "Weapon.hpp"

class HumanB{

	public:
	//constructor and destructor
		HumanB(std::string str);
		~HumanB(void);
	//Getter and Setter
		void	attack(void);
		void	setWeapon(Weapon &arme);

	private:
		std::string _name;
		Weapon		*_w;

};

#endif