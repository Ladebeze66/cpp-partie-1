/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:50:56 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 16:19:31 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << GREEN << "Dog default constructor called. Type is set to " << type << "." << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal(copy), brain(new Brain(*copy.brain))
{
	std::cout << CYAN << "Dog copy constructor called. Type is " << type << "." << RESET << std::endl;
}

Dog& Dog::operator=(const Dog &operator_aff)
{
	AAnimal::operator=(operator_aff);
	std::cout << MAGENTA << "Dog assignment operator called. Type is now " << type << "." << RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Dog destructor called. Type was " << type << "." << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}