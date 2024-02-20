/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:58:15 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 12:59:48 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << GREEN << "WrongCat default constructor called. Type is set to " << type << "." << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << CYAN << "WrongCat copy constructor called. Type is " << type << "." << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &operator_aff)
{
	WrongAnimal::operator=(operator_aff);
	std::cout << MAGENTA << "WrongCat assignment operator called. Type is now " << type << "." << RESET << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat destructor called. Type was " << type << "." << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat makes a wrong sound!" << std::endl;
}
