/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:57:32 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/07/02 10:27:57 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
	
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( std::string name, int hp, int ep, int ad);
		ClapTrap( ClapTrap const & src );
		virtual ~ClapTrap( void );
	
		ClapTrap & operator=( ClapTrap const & rhs );
	
		const std::string & getName(void)const;
		void		setName(std::string name);
		void		attack( std::string const & target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
	
	protected:
	
		std::string _type;
		std::string _name;
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _AttackDamage;
};

#endif