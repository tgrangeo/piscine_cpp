/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:09:15 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/04 14:45:44 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string name, int gradetosign, int gradetoexec);
		Form( Form & c);
		Form& operator=( Form & c);
		~Form(void);

		const std::string	&	getName() const;
		const int						getGradeToSign() const;
		const int						getGradeToExec() const;
		void					beSigned(Bureaucrat b);
		bool					getSign() const;


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
		std::string const	_name;
		bool 				_isSigned;
		int	const			_gradeToSign;
		int	const			_gradetoExec;
};

std::ostream& operator<<(std::ostream& os, Form const &b);

#endif
