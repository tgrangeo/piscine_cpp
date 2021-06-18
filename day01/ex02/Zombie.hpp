/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 11:55:00 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 12:42:16 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie{

	public:
	//constructor and destructor
		Zombie(void);
		~Zombie(void);
	//Getter and Setter
		std::string	GetName(void);
		std::string	GetType(void);
		void		SetType(std::string);
		void		SetName(std::string);
		void		advert(void);

	private:
		std::string		_type;
		std::string		_name;
};

#endif
