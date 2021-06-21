/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:18:57 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/21 18:21:21 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) 
{
	_is_filled = 0;
}

Contact::~Contact(void) {}

std::string Contact::GetName()
{
	return _Name;
}

std::string Contact::GetLastName()
{
	return _LastName;
}

std::string Contact::Getlogin()
{
	return _login;
}

int Contact::Getisfilled()
{
	return _is_filled;
}

void    Contact::PrintContact(void){
    std::cout << "First name : " << _Name << std::endl;
    std::cout << "Last name : " << _LastName << std::endl;
    std::cout << "Nickname : " << _NickName << std::endl;
    std::cout << "Login : " << _login  << std::endl;
    std::cout << "Postal adress: " << _PostalAdress  << std::endl;
    std::cout << "Email adress : " << _EmailAdress  << std::endl;
    std::cout << "Phone number : " << _PhoneNumber  << std::endl;
    std::cout << "Birthday date : " << _Birthday  << std::endl;
    std::cout << "Favorite meal : " << _FavMeal  << std::endl;
    std::cout << "Underwear color : " << _UnderwearColor  << std::endl;
    std::cout << "Darkest secret : " << _DarkestSecret  << std::endl;
}

void    Contact::fill(void){
    std::cout << "First name : ";
    std::getline(std::cin, _Name);
    std::cout << "Last name : ";
    std::getline(std::cin, _LastName);
    std::cout << "Nickname : ";
    std::getline(std::cin, _NickName);
    std::cout << "Login : ";
    std::getline(std::cin, _login);
    std::cout << "Postal adress: ";
    std::getline(std::cin, _PostalAdress);
    std::cout << "Email adress : ";
    std::getline(std::cin, _EmailAdress);
    std::cout << "Phone number : ";
    std::getline(std::cin, _PhoneNumber);
    std::cout << "Birthday date : ";
    std::getline(std::cin, _Birthday);
    std::cout << "Favorite meal : ";
    std::getline(std::cin, _FavMeal);
    std::cout << "Underwear color : ";
    std::getline(std::cin, _UnderwearColor);
    std::cout << "Darkest secret : ";
    std::getline(std::cin, _DarkestSecret);
    std::cout << "Contact succesfully created!" << std::endl;
    _is_filled = 1;
}