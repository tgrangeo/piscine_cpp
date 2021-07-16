/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:09:39 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/04 14:44:09 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradetosign, int gradetoexec): _name(name), _isSigned(false), _gradeToSign(gradetosign), _gradetoExec(gradetoexec){
	if (_gradeToSign < 1 || _gradetoExec < 1)
		throw TooHighException();
	if (_gradeToSign > 150 || _gradetoExec > 150)
		throw TooLowException();
}

Form::Form( Form & c){
	*this = c;
}

Form & Form::operator=( Form & c){
	_name = c.getName();
	_isSigned = c.getSign();
	_gradetoExec = c.getGradeToExec();
	_gradeToSign = c.getGradeToSign();
	return *this;
}



Form::~Form(void){
}

void		Form::beSigned(Bureaucrat b){
	if (_isSigned == false){
		if (b.getGrade() > _gradeToSign)
			throw TooLowException();
		else{
			std::cout << "Form has been succesfully signed by "<< b.getName() << std::endl;
			_isSigned = true;
		}
	}
	else
		std::cout << "This form is already signed" << std::endl;
}

const std::string	&Form::getName(void) const{
	return _name;
}

int		Form::getGradeToExec(void) const{
	int ret = _gradetoExec;
	return ret;
}

int		Form::getGradeToSign(void) const{
	int ret = _gradeToSign;
	return ret;
}

bool	Form::getSign(void) const{
	bool ret = _isSigned;
	return ret;
}