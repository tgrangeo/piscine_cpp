/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:37:27 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/24 16:59:15 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av){
	Karen	k;

	if (ac != 2)
	{
		std::cerr << "Bad arguments" << std::endl;
		return 1;
	}

	std::string tab[] = {"DEBUG", "INFO","WARNING", "ERROR"};
	int ret = 0;
	for (int i = 0; i < 5; i++){
		if (i == 4){
			ret = 5;
			break;
		}
		if (av[1] == tab[i]){
			ret = i + 1;
			break ;
		}
	}

	switch(ret){
		case 1: std::cout << "[ DEBUG ]" << std::endl;
				k.complain("DEBUG");
				std::cout << std::endl;

		case 2: std::cout << "[ INFO ]" << std::endl;
				k.complain("INFO");
				std::cout << std::endl;

		case 3: std::cout << "[ WARNING ]" << std::endl;
				k.complain("WARNING");
				std::cout << std::endl;

		case 4: std::cout << "[ ERROR ]" << std::endl;
				k.complain("ERROR");
				std::cout << std::endl;
				break;

		case 5: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
	}
	return 0;
}