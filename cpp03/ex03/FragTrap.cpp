/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:22:04 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/30 22:35:21 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << GREEN << "FragTrap contructor " << this->Name << " has been created." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << CYAN << "Copy constructor called for FragTrap " << this->Name << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &operator_aff)
{
	if (this != &operator_aff)
	{
		this->Name = operator_aff.Name;
		this->HitPoints = operator_aff.HitPoints;
		this->EnergyPoints = operator_aff.EnergyPoints;
		this->AttackDamage = operator_aff.AttackDamage;
	}
	std::cout << MAGENTA << "Assignment operator called for FragTrap " << this->Name << RESET << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << RED << "FragTrap " << this->Name << " has been destroyed." << RESET << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << CYAN << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << RESET << std::endl;
		this->EnergyPoints--;
    }
	else
	{
		std::cout << "FragTrap " << this->Name << " has no energy or hit points to attack!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW << "FragTrap " << this->Name << " requests a positive high five!" << RESET << std::endl;
}