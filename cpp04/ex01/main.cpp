/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:00:09 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 15:30:45 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	Animal* animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			animals[i] = new Dog();
		}
		else
		{
			animals[i] = new Cat();
		}
	}

	// Suppression des animaux
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}

	// Test de copie profonde
	Dog originalDog;
	Dog copyDog(originalDog);

	std::cout << "\n--- Test Deep Copy for Cat ---\n" << std::endl;

	Cat originalCat;
	originalCat.getBrain()->setIdea("Jouer avec une balle", 0); // Définir une idée

	// Copie profonde
	Cat copyCat(originalCat);

	// Modifier l'original après la copie
	originalCat.getBrain()->setIdea("Dormir sur le canapé", 0);

	// Afficher les idées pour vérifier la copie profonde
	std::cout << "Original Cat's Idea #0: " << originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Cat's Idea #0: " << copyCat.getBrain()->getIdea(0) << std::endl;

	if (originalCat.getBrain()->getIdea(0) != copyCat.getBrain()->getIdea(0))
	{
		std::cout << "Deep Copy Test Passed: Modifications to the original do not affect the copy." << std::endl;
	}
	else
	{
		std::cout << "Deep Copy Test Failed: Modifications to the original affect the copy." << std::endl;
	}

	return (0);
}
