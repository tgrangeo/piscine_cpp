/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:56:15 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 18:43:29 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

	public:
	//constructor and destructor
		HumanA(std::string name, Weapon &w);
		~HumanA(void);
		void	Attack(void);

	private:
		std::string	_Name;
		Weapon		&_w;

};

#endif
