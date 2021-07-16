/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:20:36 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/02 10:33:19 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap( DiamondTrap & c);
		DiamondTrap& operator=( DiamondTrap & c);
		virtual ~DiamondTrap(void);

		void	WhoAmI(void);
		void	attack(const std::string & target);

	private:
		std::string _diamName;
};
#endif
