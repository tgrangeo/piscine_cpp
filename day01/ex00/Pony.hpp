/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:28:33 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 11:19:16 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

#include <string>
#include <iostream>

class	Pony{

	public:

	//Constructor and Destructor
		Pony(void);
		Pony(int poid, int age, std::string taille);
		~Pony(void);
	//Getter
		std::string	GetRace(void);
		std::string	GetSexe(void);
		std::string	GetTaille(void);
		int			GetAge(void);
		int			GetPoid(void);
	//Setter
		void		SetRace(std::string);
		void		SetSexe(std::string);
	
	private:
	
		std::string	_race;
		std::string	_sexe;
		std::string	_taille;
		int			_age;
		int			_poid;
		

};

#endif
