/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:50:15 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/22 18:23:11 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	_raw = 0;
	this->_poseF = 0;
}

Fixed::Fixed( Fixed & c){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed & c){
	std::cout << "Assignation operator called" << std::endl;
	return c;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void Fixed::setRawBits(int const raw){
	this->_raw = raw;
}