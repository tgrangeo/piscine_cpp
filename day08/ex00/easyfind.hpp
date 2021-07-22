/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:33:17 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/22 14:34:04 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <set>
#include <algorithm>

template< typename T >
int		easyfind( T & src, int i )
{
	typename T::const_iterator it;
	it = std::find(src.begin(), src.end(), i);
	if (it == src.end())
		throw (std::string("Not found in the Container"));
	return *it;
}

#endif
