/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:52:50 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/30 14:55:37 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	_type = "FR4G-TP ";
	_name = name;
	std::cout << _type << this->_name << " has appared ! // LIKE A FRAG //" << std::endl;
}

FragTrap::FragTrap( FragTrap & c)
{
	*this = c;
	std::cout << _type << this->_name << " has appared ! // LIKE A FRAG //" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap & c){
	this->_name = c._name;
	this->_type	= c._type;
	this->_AttackDamage = c._AttackDamage;
	this->_hitPoints = c._hitPoints;
	this->_maxHitPoints = c._maxHitPoints;
	this->_energyPoints = c._energyPoints;
	this->_maxEnergyPoints = c._maxEnergyPoints;
	return *this;
}

FragTrap::~FragTrap(void){
	std::cout << _type << _name << " was killed // LIKE A FRAG //" << std::endl;
}


void	FragTrap::attack( std::string const & target )
{
	std::cout << this->_type << this->_name << " attacks " << target << " at melee, causing " << _AttackDamage << " points of damage ! // LIKE A FRAG //" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout <<  this->_type << this->_name << " request you a positive high five ! // LIKE A FRAG //" << std::endl;
}
