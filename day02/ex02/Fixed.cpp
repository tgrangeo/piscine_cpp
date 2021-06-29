/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:50:15 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/29 13:37:47 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/************************************************************/
//Constructor Destructor
/************************************************************/

Fixed::Fixed( void ) : _FracBit(8), _raw(0){
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ){
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( int const RawBits ): _FracBit(8){
	//std::cout << "Int constructor called" << std::endl;
	this->_raw = RawBits << this->_FracBit;
}

Fixed::Fixed( float const RawBits ): _FracBit(8){
	//std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(RawBits * ( 1 << this->_FracBit));
}

Fixed::Fixed( Fixed const & c ): _FracBit(8){
	//std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

/************************************************************/
//Ex00 et Ex01
/************************************************************/

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


Fixed &		Fixed::operator=( Fixed const & c ){
	//std::cout << "Assignation operator called" << std::endl;
	this->_raw = c.getRawBits();
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i ){
	o << i.toFloat();
	return o;
}

/************************************************************/
//Ex02
/************************************************************/

Fixed		Fixed::operator+( Fixed const & a){
	float c1 = a.toFloat() + this->toFloat();
	Fixed c(c1);
	return c;
}

Fixed		Fixed::operator-( Fixed const & a){
	float c1 = this->toFloat() - a.toFloat();
	Fixed c(c1);
	return c;
}

Fixed		Fixed::operator*( Fixed const & a){
	float c1 = a.toFloat() * this->toFloat();
	Fixed c(c1);
	return c;
}

Fixed		Fixed::operator/( Fixed const & a){
	float c1 = this->toFloat() / a.toFloat();
	Fixed c(c1);
	return c;
}

int Fixed::operator<( Fixed const & a){
	if (this->toFloat() < a.toFloat())
		return 1;
	else
		return 0;
}

int Fixed::operator<=( Fixed const & a){
	if (this->toFloat() <= a.toFloat())
		return 1;
	else
		return 0;
}

int Fixed::operator>( Fixed const & a){
	if (this->toFloat() < a.toFloat())
		return 0;
	else
		return 1;
}

int Fixed::operator>=( Fixed const & a){
	if (this->toFloat() <= a.toFloat())
		return 0;
	else
		return 1;
}

int Fixed::operator==( Fixed const & a){
	if (this->toFloat() == a.toFloat())
		return 1;
	else
		return 0;
}

int Fixed::operator!=( Fixed const & a){
	if (this->toFloat() != a.toFloat())
		return 1;
	else
		return 0;
}

Fixed & Fixed::min(Fixed & a, Fixed & b){
	if (a > b)
		return b;
	else
		return a;
}

Fixed & Fixed::max(Fixed & a, Fixed & b){
	if (a > b)
		return a;
	else
		return b;
}

Fixed & Fixed::min(Fixed const &  a, Fixed const & b){
	if (a.toFloat() > b.toFloat())
		return (Fixed &)b;
	else
		return (Fixed &)a;
}

Fixed & Fixed::max(Fixed const & a, Fixed const & b){
	if (a.toFloat() > b.toFloat())
		return (Fixed &)a;
	else
		return (Fixed &)b;
}

Fixed  & Fixed::operator++(void){
	this->_raw++;
	return *this;				
}

Fixed  Fixed::operator++(int n){
	Fixed tmp(*this);
	operator++();
	return tmp;			
}

Fixed  & Fixed::operator--(void){
	this->_raw--;
	return *this;				
}

Fixed  Fixed::operator--(int n){
	Fixed tmp(*this);
	operator--();
	return tmp;			
}
/************************************************************/