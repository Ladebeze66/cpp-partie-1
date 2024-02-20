/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:52:48 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 12:54:23 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << GREEN << "Cat default constructor called. Type is set to " << type << "." << RESET << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << CYAN << "Cat copy constructor called. Type is " << type << "." << RESET << std::endl;
}

Cat& Cat::operator=(const Cat &operator_aff)
{
	Animal::operator=(operator_aff);
	std::cout << MAGENTA << "Cat assignment operator called. Type is now " << type << "." << RESET << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "Cat destructor called. Type was " << type << "." << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaouhh! Miaouhh!" << std::endl;
}
