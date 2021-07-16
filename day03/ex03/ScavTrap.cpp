/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:13:07 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/02 10:12:13 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("SC4V_default", 100, 50, 20){
	std::cout << _type << this->_name << " has appared ! // LIKE A SCAV //" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	_type = "SC4V-TP ";
	_name = name;
	std::cout << _type << this->_name << " has appared ! // LIKE A SCAV //" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap & c)
{
	*this = c;
	std::cout << _type << this->_name << " has appared ! // LIKE A SCAV //" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap & c){
	this->_name = c._name;
	this->_type	= c._type;
	this->_AttackDamage = c._AttackDamage;
	this->_hitPoints = c._hitPoints;
	this->_maxHitPoints = c._maxHitPoints;
	this->_energyPoints = c._energyPoints;
	this->_maxEnergyPoints = c._maxEnergyPoints;
	return *this;
}

ScavTrap::~ScavTrap(void){
	std::cout << _type << _name << " was killed // LIKE A SCAV //" << std::endl;
}


void ScavTrap::guardGate(void){
	std::cout << _type << _name << " enterred gate keeper mode // LIKE A SCAV //" << std::endl;
}

void	ScavTrap::attack( std::string const & target ){
	std::cout << this->_type << this->_name << " attacks " << target << " at melee, causing " << _AttackDamage << " points of damage ! // LIKE A SCAV //" << std::endl;
}