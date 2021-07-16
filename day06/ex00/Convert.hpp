/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:26:47 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/07/16 13:26:53 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cctype>
#include <string>

class Convert
{
	
	public:
		Convert(char *str);
		~Convert(void);
		bool    isRound(void);
		bool isImpossible(void);
		void exception(std::string & str);
		void display(void);

	private:
		Convert(void);
		int _int;
		char * _toConvert;
		std::string _stringtoConvert;
		bool _allimpossible;
		bool _intpossible;
		bool _charpossible;
		char _char;
		double _double;
		float _float;
};
#endif
