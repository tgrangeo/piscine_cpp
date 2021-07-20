/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:01:18 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/20 14:20:12 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>
#include <cstddef>

template<typename T>
class Array
{
	public:
		Array(){
			_arr = new T[0];
			_len = 0;
		}
	
		Array(unsigned int n){
			_arr = new T[n];
			_len = n;
			for (int i = 0; i < _len; i++)
				_arr[i] = 0;
		}
		
		Array(Array const &rhs){
			_arr = new T[rhs._len];
			int	i = 0;
			while (i < rhs._len)
			{
				_arr[i] = rhs._arr[i];
				i++;
			}
			_len = rhs._len;
		}

		virtual ~Array(){
			delete [] _arr;
		}
		
		Array	&operator=(Array const &rhs){
			delete[] _arr;
			_arr = new T[rhs._len];
	
			int	i = 0;
			while (i < rhs._len)
			{
				_arr[i] = rhs._arr[i];
				i++;
			}
			_len = rhs._len;
			return (*this);
		}
	
		T		&operator[](int i){
			if (i >= _len)
				throw std::exception();
			else
				return _arr[i];
		}
	
		int	size(){
			return _len;
		}
	
	private:
		T		*_arr;
		int		_len;
};

#endif