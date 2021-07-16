/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 07:57:15 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/04 14:53:24 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
		if (grade < 1)
			throw TooLowException();
		else if (grade > 150)
			throw TooHighException();
		else
			_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat & c){
	*this = c;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat & c){
	this->_grade = c._grade;
	this->_name = c._name;
	return *this;
}

Bureaucrat::~Bureaucrat(void){
}

const std::string	& 	Bureaucrat::getName(void) const{
	const std::string &str = _name;
	return str;
}

int				Bureaucrat::getGrade(void) const{
	int const n = _grade;
	return n;
}

void				Bureaucrat::gradeUp(void){
	_grade--;
	if (_grade < 1)
		throw TooHighException();
}

void				Bureaucrat::gradeDown(void){
	_grade++;
	if (_grade > 150)
		throw TooLowException();
}

// std::string	const	Bureaucrat::GradeTooHighException() const throw(){
// 	return "you can t set set grade too high";
// }

// std::string const		Bureaucrat::GradeTooLowException() const throw(){
// 	return "you can t set set grade too low";
// }

std::ostream& operator<<(std::ostream& os, Bureaucrat const &b){
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return os;
}