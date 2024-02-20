/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:14:54 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 17:36:22 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::string input;
	while (true)
	{
		std::cout << "Enter command (equip, use, or quit): ";
		std::cin >> input;

		if (input == "equip")
		{
			std::string materiaType;
			std::cout << "Enter materia type (ice or cure): ";
			std::cin >> materiaType;
			AMateria* tmp = src->createMateria(materiaType);
			if (tmp)
			{
				me->equip(tmp);
				std::cout << materiaType << " equipped." << std::endl;
			}
			else
			{
				std::cout << "Unknown materia type." << std::endl;
			}
		}
		else if (input == "use")
		{
			int idx;
			std::cout << "Enter inventory index (0-3): ";
			std::cin >> idx;
			me->use(idx, *bob);
		}
		else if (input == "quit")
		{
			break;
		}
		else
		{
			std::cout << "Unknown command." << std::endl;
		}
	}

	delete bob;
	delete me;
	delete src;

	return (0);
}
