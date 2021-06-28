/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:50:09 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/28 13:18:32 by tgrangeo         ###   ########lyon.fr   */
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
