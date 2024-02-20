/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:31:01 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/24 14:06:52 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "\033[32m";
	std::cout << "Constructor called" << std::endl;
	std::cout << "\033[0m";
}

Zombie::~Zombie(void)
{
	std::cout << "\033[31m";
	std::cout << "Destructor called" << std::endl;
	std::cout << "\033[0m";
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}