/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 07:57:46 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/04 09:07:14 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat & c);
		Bureaucrat& operator=( Bureaucrat & c);
		virtual ~Bureaucrat(void);
		
		const std::string	&	getName() const;
		int						getGrade() const;
		void					gradeUp();
		void					gradeDown();


		struct TooHighException : public std::exception
		{
			const char * what() const throw ()
			{
				return("Exception : Too High grade!");
			}
		};
		struct TooLowException : public std::exception
		{
			const char * what() const throw ()
			{
				return("Exception : Too Low grade!");
			}
		};

	private:
		std::string _name;
		int			_grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const &b);
#endif
