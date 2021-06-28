/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:50:15 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/28 13:25:07 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _FracBit(8), _raw(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( int const RawBits ): _FracBit(8){
	std::cout << "Int constructor called" << std::endl;
	this->_raw = RawBits << this->_FracBit;
}

Fixed::Fixed( float const RawBits ): _FracBit(8){
	std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(RawBits * ( 1 << this->_FracBit));
}

Fixed::Fixed( Fixed const & c ): _FracBit(8){
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

Fixed &		Fixed::operator=( Fixed const & c ){
	std::cout << "Assignation operator called" << std::endl;
	this->_raw = c.getRawBits();
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i ){
	o << i.toFloat();
	return o;
}

int		Fixed::toInt( void ) const{
	return _raw >> this->_FracBit;
}

float		Fixed::toFloat( void ) const{
	return this->_raw / (float)(1 << this->_FracBit);
}

int			Fixed::getRawBits( void ) const{
	return this->_raw;
}

void			Fixed::setRawBits( int const RawBits ){
	this->_raw = RawBits;
}
