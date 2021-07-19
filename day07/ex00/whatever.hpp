/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:53:26 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/19 11:58:51 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
T &	max(T & a, T & b){
	if (a < b)
		return b;
	else
		return a;
}

template <typename T>
T &	min(T & a, T & b){
	if (a > b)
		return b;
	else
		return a;
}

template <typename T>
void	swap(T & a, T & b){
	T temp = a;
	a = b;
	b = temp;
}

#endif
