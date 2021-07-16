/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:20:41 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/02 10:34:07 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):FragTrap(), ScavTrap(){
	_type = "DI4M-TP ";
	_diamName = "DIAM_default";
	ClapTrap::setName("DIAM_default_clap_name");
	_AttackDamage = 20;
	_hitPoints = 100;
	_energyPoints = 50;
	std::cout << _type << _diamName << " has appared ! // LIKE A DIAM //" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(), ScavTrap(){
	_diamName = name;
	_type = "DI4M-TP ";
	ClapTrap::setName(name + "_clap_name");
	_AttackDamage = 20;
	_hitPoints = 100;
	_energyPoints = 50;
	std::cout << _type << _diamName << " has appared ! // LIKE A DIAM //" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap & c){
	*this = c;
	std::cout << _type << this->_diamName << " has appared ! // LIKE A DIAM //" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap & c){
	this->_name = c._diamName;
	this->_type	= c._type;
	this->_AttackDamage = c._AttackDamage;
	this->_hitPoints = c._hitPoints;
	this->_maxHitPoints = c._maxHitPoints;
	this->_energyPoints = c._energyPoints;
	this->_maxEnergyPoints = c._maxEnergyPoints;
	return *this;
}

void	DiamondTrap::WhoAmI(void){
	std::cout << "My Diamond name is "<< _diamName << std::endl;
	std::cout << "My Clap name is "<< ClapTrap::getName() << std::endl;
	
}

void	DiamondTrap::attack(const std::string & target){
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(void){
	std::cout << _type << _diamName << " was killed // LIKE A DIAM //" << std::endl;
}