/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:33:11 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/22 14:36:44 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <set>
#include <vector>

void		displayInt( int i )
{
	std::cout << i << " ";
}

int			main(void)
{
	std::cout << std::endl <<  "Test avec un set" << std::endl << std::endl;
	{//avec un set int
		std::set<int> myset;
		int find1 = 40;
		int find2 = 33;
	
		for(int i = 0; i <= 5; i++)
			myset.insert(i * 10);
		std::cout << "MySet : ";
		for_each(myset.begin(), myset.end(), displayInt);
		std::cout << std::endl;
		try
		{
			std::cout << "Find : " << easyfind(myset, find1) << std::endl;
		}
		catch(std::string str)
		{
			std::cerr << str << std::endl;
		}
		try
		{
			std::cout << "Find2 : " << easyfind(myset, find2) << std::endl;
		}
		catch(std::string str)
		{
			std::cerr << str << std::endl;
		}
	}
	std::cout << std::endl <<  "Test avec une list" << std::endl << std::endl;
	{//avec une list int
		std::list<int> mylist;
		int find1 = 40;
		int find2 = 33;
	
		for(int i = 0; i <= 5; i++)
			mylist.push_back(i * 10);
		std::cout << "Mylist : ";
		for_each(mylist.begin(), mylist.end(), displayInt);
		std::cout << std::endl;
		try
		{
			std::cout << "Find : " << easyfind(mylist, find1) << std::endl;
		}
		catch(std::string str)
		{
			std::cerr << str << std::endl;
		}
		try
		{
			std::cout << "Find2 : " << easyfind(mylist, find2) << std::endl;
		}
		catch(std::string str)
		{
			std::cerr << str << std::endl;
		}
	}
	std::cout << std::endl <<  "Test avec un vector" << std::endl << std::endl;
	{//avec vector int
		std::vector<int> myvec;
		int find1 = 40;
		int find2 = 33;
	
		for(int i = 0; i <= 5; i++)
			myvec.push_back(i * 10);
		std::cout << "MyVector : ";
		for_each(myvec.begin(), myvec.end(), displayInt);
		std::cout << std::endl;
		try
		{
			std::cout << "Find : " << easyfind(myvec, find1) << std::endl;
		}
		catch(std::string str)
		{
			std::cerr << str << std::endl;
		}
		try
		{
			std::cout << "Find2 : " << easyfind(myvec, find2) << std::endl;
		}
		catch(std::string str)
		{
			std::cerr << str << std::endl;
		}
	}
}
