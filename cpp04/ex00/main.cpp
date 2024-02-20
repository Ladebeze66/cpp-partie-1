/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:00:09 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 13:19:56 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

    delete meta;
    delete j;
    delete i;

	std::cout << "\n--- Tests WrongAnimal & WrongCat ---\n" << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;

	std::cout << "\n--- Tests supplémentaires pour Dog & Cat ---\n" << std::endl;

	Dog dog1, dog2;
	Cat cat1, cat2;

	dog1.makeSound();
	cat1.makeSound();

	Dog dog3(dog1);
	dog3.makeSound();

	cat2 = cat1;
	cat2.makeSound();

	return (0);
}
