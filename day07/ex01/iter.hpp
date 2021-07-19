/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:06:54 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/19 14:29:51 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
# define	_ITER_HPP_

#include <iostream>
#include <string>

template <typename T>
void	iter(T *t, int size, void (*pf)(T &t)){
	int i = 0;

	while (i < size){
		pf(t[i]);
		i++;
	}
};
#endif