/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:37:27 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/24 16:40:30 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(){
	Karen	k;

	std::cout << "DEBUG string :" << std::endl;
	k.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "INFO string :" << std::endl;
	k.complain("INFO");
	std::cout << std::endl;
	std::cout << "WARNING string :" << std::endl;
	k.complain("WARNING");
	std::cout << std::endl;
	std::cout << "ERROR string :" << std::endl;
	k.complain("ERROR");
	std::cout << std::endl;
	return 0;
}