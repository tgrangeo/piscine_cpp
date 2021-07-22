/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:32:50 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/22 15:37:03 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

class Span
{
	public:
	
		Span(unsigned int n);
		~Span( void );
		Span( Span const & src );
		Span & operator=( Span const & rhs );
	
		void	addNumber( long int i );
		void	generateNumberRange( long int i, long int j );
		void	printNumber( void ) const;
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );
	
	private:
	
		Span( void );
		unsigned int _n;
		std::vector<int>	_vector;
};

std::ostream & 			operator<<( std::ostream & o, Span const & i );

#endif