/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:50:09 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/29 13:37:59 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int n);
		Fixed(float n);
		Fixed( Fixed const & c );
		Fixed &	operator=( Fixed const & c );
		~Fixed(void);
		//ex02
		/*************/
		Fixed	operator+(Fixed const & a);
		Fixed	operator-(Fixed const & a);
		Fixed	operator*(Fixed const & a);
		Fixed	operator/(Fixed const & a);
		Fixed &	operator++( void );
		Fixed	operator++( int );
		Fixed &	operator--( void );
		Fixed	operator--( int );
		int		operator<(Fixed const & a);
		int		operator>(Fixed const & a);
		int		operator==(Fixed const & a);
		int		operator>=( Fixed const & a);
		int		operator<=( Fixed const & a);
		int		operator!=( Fixed const & a);

		Fixed & min(Fixed & a, Fixed & b);
		Fixed & max(Fixed & a, Fixed & b);
		Fixed & min(Fixed const & a, Fixed const & b);
		Fixed & max(Fixed const & a, Fixed const & b);
		
		/*************/

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt( void ) const;
		float toFloat( void ) const;

	private:
		int	const _FracBit;
		int	_raw;

};

std::ostream & operator<<(std::ostream &os, Fixed const & c);

#endif
