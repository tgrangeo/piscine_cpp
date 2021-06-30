/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:49:58 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/30 15:08:41 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap( FragTrap & c);
		FragTrap& operator=( FragTrap & c);
		virtual ~FragTrap(void);
		void	attack( std::string const & target );
		void	highFivesGuys(void);

	private:
		//std::string _name;
};

#endif