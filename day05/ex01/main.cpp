/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 08:20:53 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/04 08:59:29 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	//No exception 
	std::cout << "-----No exception-----" << std::endl;
	std::cout << std::endl;
	Bureaucrat jean("Jean", 42);

	std::cout << jean << std::endl;
	jean.gradeDown();
	std::cout << jean << std::endl;

	//too low grade
	std::cout << std::endl;
	std::cout << "-----Too low-----" << std::endl;
	std::cout << std::endl;
	try	{
		Bureaucrat jj("jean jean", -169);
	}
	catch(Bureaucrat::TooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TooLowException e) {
		std::cout << e.what() << std::endl;
	}
	
	try	{
		Bureaucrat jj("jean jean", 150);
		std::cout << jj << std::endl;
		jj.gradeDown();
	}
	catch(Bureaucrat::TooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TooLowException e) {
		std::cout << e.what() << std::endl;
	}

	//too high grade

	std::cout << std::endl;
	std::cout << "-----Too high-----" << std::endl;
	std::cout << std::endl;
	try	{
		Bureaucrat jjj("jean jean jean", 169);
	}
	catch(Bureaucrat::TooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TooLowException e) {
		std::cout << e.what() << std::endl;
	}
	
	try	{
		Bureaucrat jjj("jean jean jean", 1);
		std::cout << jjj << std::endl;
		jjj.gradeUp();
	}
	catch(Bureaucrat::TooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TooLowException e) {
		std::cout << e.what() << std::endl;
	}


	return 0;
}