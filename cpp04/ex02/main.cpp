/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:00:09 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 16:28:40 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// Ajoutez d'autres inclusions si nécessaire

int main()
{
	// Tentative d'instanciation d'un Animal (doit échouer)
	// AAnimal animal;  // Décommentez pour vérifier que cela génère une erreur de compilation.

	// Création d'un tableau d'animaux
	const int numAnimals = 4;
	AAnimal* animals[numAnimals];

	// Remplir le tableau avec des Dogs et Cats
    for (int i = 0; i < numAnimals; ++i)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Dog();  // Utilise Dog pour les indices pairs
		}
		else
		{
			animals[i] = new Cat();  // Utilise Cat pour les indices impairs
		}
	}

	// Faire du bruit avec chaque animal
	for (int i = 0; i < numAnimals; ++i)
	{
		std::cout << "Animal #" << i + 1 << " sound: ";
		animals[i]->makeSound();
	}

	// Libérer la mémoire allouée pour les animaux
	for (int i = 0; i < numAnimals; ++i)
	{
		delete animals[i];
	}

	// Tests supplémentaires pour la copie profonde
	std::cout << "\n--- Test Deep Copy ---\n";
	Dog originalDog;
	Dog copyDog(originalDog);  // Utiliser le constructeur de copie
	originalDog.makeSound();
	copyDog.makeSound();
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

	// Test de l'assignation
	Dog anotherDog;
	anotherDog = originalDog;  // Utiliser l'opérateur d'assignation
	anotherDog.makeSound();



    return (0);
}
