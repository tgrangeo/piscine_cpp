/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:15:05 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/19 15:31:17 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <stdio.h>
#include <ctype.h>

template <typename T>
void	f(T &t){
	std::cout << t << " ";
}

// Version générique  
template <typename T> 
void ft(T & t )  
{  
   std::cout << t << " ";
}
// Spécialisation pour les int
template <> 
void ft<int>(int & t )  
{  
	t = t + 1;
    std::cout << t << " "; 
}
// Spécialisation pour les string
template <> 
void ft<std::string>(std::string & t )  
{  
	t = "new";
    std::cout << t << " "; 
}
// Spécialisation pour les float
template <> 
void ft<float>(float & t )  
{  
	t = t * 2;
    std::cout << t << " "; 
}

int main(void){
	std::cout << std::endl;

	{//test afficher tableau int
	int *tab_int = new int[3];
	tab_int[0] = 1;
	tab_int[1] = 2;
	tab_int[2] = 3;
	iter(tab_int, 3, f);
	std::cout << std::endl;
	delete [] tab_int;
	}
	
	std::cout << std::endl;

	{//test int + 1
	int *tab_int = new int[3];
	tab_int[0] = 1;
	tab_int[1] = 2;
	tab_int[2] = 3;
	iter(tab_int, 3, ft);
	std::cout << std::endl;
	delete [] tab_int;
	}
	
	std::cout << std::endl;

	{//test afficher tableau double
	double *tab_double = new double[3];
	tab_double[0] = 1.32;
	tab_double[1] = 2.42;
	tab_double[2] = 3.69;
	iter(tab_double, 3, f);
	std::cout << std::endl;
	delete [] tab_double;
	}
	
	std::cout << std::endl;

	{//test float * 2
	float *tab_float = new float[3];
	tab_float[0] = 1.32;
	tab_float[1] = 2.42;
	tab_float[2] = 3.69;
	iter(tab_float, 3, ft);
	std::cout << std::endl;
	delete [] tab_float;
	}
	
	std::cout << std::endl;

	{//test afficher tableau char
	std::string *tab_char = new std::string[3];
	tab_char[0] = "salut";
	tab_char[1] = "les";
	tab_char[2] = "gens";
	iter(tab_char, 3, f);
	std::cout << std::endl;
	delete [] tab_char;
	}
	
	std::cout << std::endl;

	{//test modify tableau char
	std::string *tab_char = new std::string[3];
	tab_char[0] = "salut";
	tab_char[1] = "les";
	tab_char[2] = "gens";
	iter(tab_char, 3, ft);
	std::cout << std::endl;
	delete [] tab_char;
	}
	
	std::cout << std::endl;
	
	return 0;
}