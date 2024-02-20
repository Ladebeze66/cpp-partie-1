/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:42:16 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/30 22:28:16 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << GREEN << "ScavTrap constructor " << this->Name << " has been created." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << CYAN << "Copy constructor called for ScavTrap " << this->Name << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &operator_aff)
{
	if (this != &operator_aff)
	{
		this->Name = operator_aff.Name;
		this->HitPoints = operator_aff.HitPoints;
		this->EnergyPoints = operator_aff.EnergyPoints;
		this->AttackDamage = operator_aff.AttackDamage;
	}
	std::cout << MAGENTA << "Assignment operator called for ScavTrap " << this->Name << RESET << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << this->Name << " has been destroyed." << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << CYAN << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << RESET << std::endl;
		this->EnergyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << this->Name << " has no energy or hit points to attack!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode." << std::endl;
}
