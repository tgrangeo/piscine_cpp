/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 11:18:52 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 11:21:12 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void memoryLeak(){
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}

int main(void){
	memoryLeak();
	return (0);
}