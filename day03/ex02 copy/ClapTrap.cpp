/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:57:34 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/06/30 14:41:22 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ):_type("CL4P-TP"),  _name("Default"), _hitPoints(10),_maxHitPoints(100), _energyPoints(10), _maxEnergyPoints(100),  _AttackDamage(0){
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << _type << std::endl;
	std::cout << this->_type << this->_name << " has appared !" << std::endl;
}

ClapTrap::ClapTrap( std::string name, int hp, int ep, int ad):_type("CL4P-TP "), _name(name), _hitPoints(hp), _maxHitPoints(100), _energyPoints(ep), _maxEnergyPoints(100),  _AttackDamage(ad){
	std::cout << this->_type << this->_name << " has appared !" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _type("CL4P-TP "), _name(name), _hitPoints(10), _maxHitPoints(100), _energyPoints(10), _maxEnergyPoints(100),  _AttackDamage(0){
	std::cout << this->_type << this->_name << " has appared !" << std::endl;
}

ClapTrap::ClapTrap(  ClapTrap const & src ): _name(src._name), _hitPoints(src._hitPoints), _maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints), _maxEnergyPoints(src._maxEnergyPoints), _AttackDamage(src._AttackDamage){
	std::cout << "The copy of CL4P-TP " << this->_name << " has appared !" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << this->_type << this->_name << " was killed " << std::endl;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_type	= rhs._type;
	this->_AttackDamage = rhs._AttackDamage;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	return *this;
}

const std::string & ClapTrap::getName(void) const{
	const std::string	&name = _name;
	return name;
}


void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0){
		this->_hitPoints = 0;
		std::cout << this->_type << this->_name << " is KO" << std::endl;
	}
	if (this->_hitPoints > 0)
		std::cout << this->_type << this->_name << " has " << _hitPoints << " HP !" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints){
		this->_hitPoints = _maxHitPoints;
		std::cout << this->_type << this->_name << " is full hp" << std::endl;
	}
	else
		std::cout << this->_type << this->_name << " have " << _hitPoints << " HP !" << std::endl;
}

void	ClapTrap::attack( std::string const & target )
{
	std::cout << this->_type << this->_name << " attacks " << target << " at melee, causing " << _AttackDamage << " points of damage !" << std::endl;
}
