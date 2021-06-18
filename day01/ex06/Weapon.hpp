/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:49:58 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 18:41:51 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

#include <iostream>
#include <string>

class Weapon{

	public:
	//constructor and destructor
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
	//Getter and Setter
		std::string	&GetType(void);
		void		SetType(std::string str);

	private:
		std::string _type;

};

#endif