/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:36:37 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 12:30:10 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void){
	_age = 0;
	_poid = 0;
	_taille = "double poney";
}

Pony::Pony(int poid, int age, std::string taille):_poid(poid), _age(age), _taille(taille){
}

Pony::~Pony(void){
}

std::string	Pony::GetRace(void){
	return _race;
}

std::string	Pony::GetSexe(void){
	return _sexe;
}

std::string	Pony::GetTaille(void){
	return _taille;
}

int			Pony::GetAge(void){
	return _age;
}

int			Pony::GetPoid(void){
	return _poid;
}

void	Pony::SetRace(std::string str){
	_race = str;
}

void	Pony::SetSexe(std::string str){
	_sexe = str;
}
