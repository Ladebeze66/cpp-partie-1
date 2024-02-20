/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 19:25:01 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 16:18:10 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Undefined")
{
	std::cout << GREEN << "AAnimal constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) : type(copy.type)
{
	std::cout << GREEN << "AAnimal copy constructor called. Type is copied as " << type << "." << RESET << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &operator_aff)// Protection contre l'auto-affectation
{
	if (this != &operator_aff)
	{
		this->type = operator_aff.type;
	}
	std::cout << "AAnimal assignment operator called. Type is set to " << type << "." << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal destructor called" << RESET << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::makeSound() const
{
	 std::cout << MAGENTA << "Some animal sound!" << RESET << std::endl;
}
