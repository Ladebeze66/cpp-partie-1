/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 19:25:01 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 12:06:06 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Undefined")
{
	std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << GREEN << "Animal copy constructor called. Type is copied as " << type << "." << RESET << std::endl;
}

Animal& Animal::operator=(const Animal &operator_aff)// Protection contre l'auto-affectation
{
	if (this != &operator_aff)
	{
		this->type = operator_aff.type;
	}
	std::cout << "Animal assignment operator called. Type is set to " << type << "." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Animal destructor called" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	 std::cout << MAGENTA << "Some animal sound!" << RESET << std::endl;
}
