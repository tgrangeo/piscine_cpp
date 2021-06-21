/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:20:19 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/17 15:39:56 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <sstream>

class Contact{

	public:

		Contact(void);
		~Contact(void);

		void fill();
		void PrintContact();
		std::string GetName();
		std::string GetLastName();
		std::string Getlogin();
		int Getisfilled();

	private:

		std::string _Name;
		std::string _LastName;
		std::string _NickName;
		std::string _login;
		std::string _PostalAdress;
		std::string _PhoneNumber;
		std::string _Birthday;
		std::string _FavMeal;
		std::string _UnderwearColor;
		std::string _DarkestSecret;
		std::string _EmailAdress;
		int			_is_filled;
};

#endif