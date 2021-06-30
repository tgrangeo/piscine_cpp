/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:13:18 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/30 14:51:21 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap( ScavTrap & c);
		ScavTrap& operator=( ScavTrap & c);
		virtual ~ScavTrap(void);
		void	guardGate(void);
		void	attack( std::string const & target );

	private:
		std::string _name;
};

#endif