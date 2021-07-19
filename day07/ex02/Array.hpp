/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:01:18 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/19 15:06:07 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

template <typename T>
class Array{

	public:
	//constructor and destructor
		Array(void) { _array = new T() };
		Array(unsigned int n){ _array = new T(n) };
		~Array(void) { delete [] _array};
	//Getter and Setter

	private:
		T	*_array;

};

#endif