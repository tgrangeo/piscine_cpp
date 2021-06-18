/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:34:15 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 10:46:15 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_begin(void)
{
	std::cout << "=> Welcome to the nokia 3310" << std::endl;
	std::cout << "=> Enter one of the followings command:" << std::endl;
	std::cout << "		-ADD: to add a new contact" << std::endl;
	std::cout << "		-SEARCH: to find the good contact" << std::endl;
	std::cout << "		-EXIT: to kill me" << std::endl;
}

int		action_todo(std::string str)
{
	if(str.compare("ADD") == 0)    return 1;
	if(str.compare("EXIT") == 0)    return 0;
	if(str.compare("SEARCH") == 0)    return 2;
	return -1;
}

std::string		truncate(std::string str) //coupe la chaine si neccesaire
{
	if (str.length() > 9){
		str = str.substr(0, 9);
		str += ".";
		return str;
	}
	else
		return str;
}

int		Search(Contact phone[8])	//afficher le tableau des contacts
{
	int i = 0;

	
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "|" << "ID" << "|" << "Name      " << "|" << "Last Name " << "|" << "login     " << "|" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	while (i < 8 && phone[i].Getisfilled() > 0){
		std::cout << "|" << std::cout.width(1) << i << "|";
		std::cout.width(10);
		std::cout << truncate(phone[i].GetName()) << "|";
		std::cout.width(10);
		std::cout <<  truncate(phone[i].GetLastName()) << "|";
		std::cout.width(10);
		std::cout << truncate(phone[i].Getlogin()) << "|" << std::endl;
		i++;
	}
	std::cout << "-------------------------------------" << std::endl;
	return 0;
}

int	print_index(Contact phone[8]){	//demander un index et afficher le contact a cet index
	std::string str;
	int num;

	std::cout << "=> Entrer un index pour voir le contact" << std::endl;
	std::getline(std::cin, str);
	if (isdigit(atoi(str.c_str())) == 0){
		int a = atoi(str.c_str());
		if ((a <= 7 && a >= 0) && phone[a].Getisfilled() == 1){
			phone[a].PrintContact();
			return 0;
		}
		else 
			std::cout << "=> Wrong index noob" << std::endl;
		
	}
	else 
		std::cout << "=> Wrong index noob" << std::endl;
	return 1;
}

int main(void){
	Contact	phone[8];
	int ret;
	int i = 0;

	std::string	strUser;
	print_begin();
	while (1){
		std::getline(std::cin, strUser);
		ret = action_todo(strUser);
		if (ret == 0)
			return 0 ;
		else if (ret == 1){
			if (i < 8)
				phone[i++].fill();
			else
				std::cout << "=> Too much Contact" << std::endl;
		}
		else if (ret == 2){	
			Search(phone);
			while(ret != 0)
				ret = print_index(phone);
		}
		else if (ret == -1)
			std::cout << "=> I don't know your command" << std::endl;
	}
	return 0;
}