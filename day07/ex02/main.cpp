/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasgrangeon <thomasgrangeon@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:06:29 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/20 11:09:10 by thomasgrang      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int		main()
{
	Array<int> arr(15);

	size_t	i = 0;
	while (i < arr.size())
	{
		std::cout << arr[i] << " ";
		i++;
	}
	return (0);
}