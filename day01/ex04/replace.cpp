/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:02:30 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/28 11:18:40 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int ac, char **av){
   
   	//error nombre d'arguments 
	std::ifstream			File;
	if (ac != 4){
		std::cerr << "wrong arguments" << std::endl;
		return (1);
	}
	//declaration
	File.open(av[1]);
	std::string				buffer;
	std::string		ToModify = av[2];
	std::string		NewString = av[3];
	int						len = 0;
	int						found = 0;
	//Declaration newfile
	std::stringstream		NewName;
	NewName << av[1] << ".replace";
	std::ofstream			NewFile(NewName.str());

	if (File.fail()){
		std::cerr << File << "： No Such File Exist" << std::endl;
		return (1);
	}
	while (std::getline(File, buffer))
	{
		found = 0;
		found = buffer.find(ToModify, found + len);
		len = NewString.length();
		while(found >= 0)
		{
			buffer.replace(found,ToModify.length(), NewString);
			found = buffer.find(ToModify, found + len);
			std::cout << found << std::endl;
		}
		NewFile << buffer << std::endl;
	}
	return (0);
}
