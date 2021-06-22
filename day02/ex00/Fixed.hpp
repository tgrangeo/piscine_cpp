/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:50:09 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/22 18:20:14 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed( Fixed & c);
		Fixed& operator=( Fixed & c);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int	_poseF;
		int	_raw;

};
#endif
