/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgrangeon <thomasgrangeon@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:01:18 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/20 11:10:00 by thomasgrang      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>
#include <cstddef>

template<typename T>
class Array
{
	T		*arr;
	size_t	len;

public:
	Array()
	{
		arr = new T[0];
		len = 0;
	}

	Array(unsigned int n)
	{
		arr = new T[n];
		len = n;
	}

	Array(Array const &rhs)
	{
		arr = new T[rhs.len];
		size_t	i;
		while (i < rhs.len)
		{
			arr[i] = rhs.arr[i];
			i++;
		}
		len = rhs.len;
	}

	Array	&operator=(Array const &rhs)
	{
		delete[] arr;
		arr = new T[rhs.len];

		size_t	i;
		while (i < rhs.len)
		{
			arr[i] = rhs.arr[i];
			i++;
		}
		len = rhs.len;
		return (*this);
	}

	T		&operator[](size_t i)
	{
		if (i >= len)
			throw std::exception();
		else
			return arr[i];
	}

	size_t	size()
	{
		return (len);
	}
};

#endif