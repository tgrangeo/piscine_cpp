/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:06:29 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/20 14:22:21 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int		main()
{
	std::cout << std::endl;
	{//	Array with constructor unsigned int
		std::cout << "Array int :" << std::endl;
		Array<int> arr(15);
	
		int	i = 0;
		std::cout << "|";
		while (i < arr.size())
		{
			std::cout << arr[i] << " ";
			i++;
		}
		std::cout << "|";
	}
	std::cout << std::endl << std::endl;
	{//	Array char 
		std::cout << "Array char :" << std::endl;
		Array<char> arr(15);
	
		int	i = 0;
		std::cout << "|";
		while (i < arr.size())
		{
			std::cout << arr[i] << " ";
			i++;
		}
		std::cout << "|";
	}
	std::cout << std::endl << std::endl;
	{//	Array float 
		std::cout << "Array float :" << std::endl;
		Array<float> arr(15);
	
		int	i = 0;
		std::cout << "|";
		while (i < arr.size())
		{
			std::cout << arr[i] << " ";
			i++;
		}
		std::cout << "|";
	}
	std::cout << std::endl << std::endl;
	{//	Array empty int
		std::cout << "Array empty int :" << std::endl;
		Array<int> arr(0);
	
		int	i = 0;
		std::cout << "|";
		while (i < arr.size())
		{
			std::cout << arr[i] << " ";
			i++;
		}
		std::cout << "|";
	}
	std::cout << std::endl << std::endl;
	{//	Array empty char 
		std::cout << "Array empty char :" << std::endl;
		Array<char> arr;
	
		int	i = 0;
		std::cout << "|";
		while (i < arr.size())
		{
			std::cout << arr[i] << " ";
			i++;
		}
		std::cout << "|";
	}
	std::cout << std::endl << std::endl;
	{//	Array empty float 
		std::cout << "Array empty float :" << std::endl;
		Array<float> arr;
	
		int	i = 0;
		std::cout << "|";
		while (i < arr.size())
		{
			std::cout << arr[i] << " ";
			i++;
		}
		std::cout << "|";
	}
	std::cout << std::endl << std::endl;
	{//	Array copy and assignation tab int
		std::cout << "Array asssignation int :" << std::endl;
		Array<int> arr(15);
		Array<int> arr2 = arr;
	
		int	i = 0;
		std::cout << "|";
		while (i < arr2.size())
		{
			std::cout << arr2[i] << " ";
			i++;
		}
		std::cout << "|";
		std::cout << std::endl << std::endl;
		std::cout << "Array copy char :" << std::endl;
		Array<char> arr4(15);
		Array<char> arr3(arr4);

	
		i = 0;
		std::cout << "|";
		while (i < arr2.size())
		{
			std::cout << arr2[i] << " ";
			i++;
		}
		std::cout << "|";

	}
	std::cout << std::endl << std::endl;
	{//throw exception if iterator is out of range
		
		std::cout << "throw exception if iterator is out of range :" << std::endl;
		Array<int> arr(15);
		try{
			std::cout <<  arr[42] << std::endl;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl << std::endl;
	return 0;
}