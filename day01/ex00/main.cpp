/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrangeo <tgrangeo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:44:53 by tgrangeo          #+#    #+#             */
/*   Updated: 2021/06/18 12:25:04 by tgrangeo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	pony_stack(21, 6, "double poney");
	
	std::cout << "Hello I'm pony_stack and I exist" << std::endl << std::endl;
	
	std::cout << "pony_stack pese " << pony_stack.GetPoid() << " kg" << std::endl;
	std::cout << "pony_stack a " << pony_stack.GetAge() << " ans" << std::endl;
	std::cout << "pony_stack est un " << pony_stack.GetTaille() << std::endl;
	pony_stack.SetRace("jambon");
	std::cout << "pony_stack est de type: " << pony_stack.GetRace() << std::endl;
	pony_stack.SetSexe("Non Genré");
	std::cout << "pony_stack est de sexe: " << pony_stack.GetSexe() << std::endl;
	std::cout << "pony_stack quitte ce monde" << std::endl;
}

void	ponyOnTheHeap(void)
{
	Pony	*pony_heap;
	
	pony_heap = new Pony(42, 2, "poney simple");
	std::cout << "Hello I'm pony_heap and I exist" << std::endl << std::endl;
	
	std::cout << "pony_heap pese " << pony_heap->GetPoid() << " kg" << std::endl;
	std::cout << "pony_heap a " << pony_heap->GetAge() << " ans" << std::endl;
	std::cout << "pony_heap est un " << pony_heap->GetTaille() << std::endl;
	pony_heap->SetRace("salade");
	std::cout << "pony_heap est de type: " << pony_heap->GetRace() << std::endl;
	pony_heap->SetSexe("Non Genré");
	std::cout << "pony_heap est de sexe: " << pony_heap->GetSexe() << std::endl;
	std::cout << "pony_heap quitte ce monde" << std::endl;
	delete pony_heap;
}

int		main(void){
	std::cout << "------------------------------------------------" << std::endl;
	ponyOnTheStack();
	std::cout << "------------------------------------------------" << std::endl;
	ponyOnTheHeap();
	std::cout << "------------------------------------------------" << std::endl;
	return 0;
}
