/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:55:01 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 12:57:57 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << GREEN << "WrongAnimal default constructor called. Type is set to " << type << "." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
	std::cout << CYAN << "WrongAnimal copy constructor called. Type is " << type << "." << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &operator_aff)
{
	if (this != &operator_aff)
	{
		this->type = operator_aff.type;
	}
	std::cout << MAGENTA << "WrongAnimal assignment operator called. Type is now " << type << "." << RESET << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal destructor called. Type was " << type << "." << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a wrong sound!" << std::endl;
}
