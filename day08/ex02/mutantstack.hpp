/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:33:34 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/22 15:51:37 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template < typename T >
class MutantStack: public std::stack<T>
{

public:

	MutantStack( void ): std::stack<T>() { };
	virtual ~MutantStack( void ) { };
	MutantStack( MutantStack const & src ): _mstack(src._mstack) { };
	MutantStack & operator=( MutantStack const & rhs ) {
		this->_mstack = rhs._mstack;
		return *this;
	}

	typedef typename std::list<T>::iterator iterator;

	iterator	begin( void ) { return _mstack.begin(); }
	iterator	end( void ) { return _mstack.end(); }

	bool			empty( void ) { return _mstack.empty(); }
	size_t			size( void ) { return _mstack.size(); }
	void			push( T x ) { _mstack.push_front(x); }
	void			pop( void ) { _mstack.pop_front(); }
	T				top( void ) { return _mstack.front(); }

private:

	std::list<T> _mstack;
};
#endif
