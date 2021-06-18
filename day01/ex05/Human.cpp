/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:21:38 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 17:27:29 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){
}

Human::~Human(void){
}

Brain	Human::GetBrain(void){
	return _cerveau;
}

Brain	*Human::identify(void){
	return _cerveau.identify();
}
