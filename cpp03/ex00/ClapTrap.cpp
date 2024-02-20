/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:59:36 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/30 22:29:13 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Name(""), HitPoints(10), EnergyPoints(10), AttackDamage(0) {}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << GREEN << "ClapTrap " << this->Name << " is created!\n" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << CYAN << "Copy constructor called for ClapTrap " << this->Name << RESET << std::endl;
	return;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &operator_aff)
{
	if (this != &operator_aff)
	{
		this->Name = operator_aff.Name;
		this->HitPoints = operator_aff.HitPoints;
		this->EnergyPoints = operator_aff.EnergyPoints;
		this->AttackDamage = operator_aff.AttackDamage;
	}
	std::cout << MAGENTA << "Assignment operator called for ClapTrap " << this->Name << RESET << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "\nClapTrap " << this->Name << " is detroyed!" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << MAGENTA << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << RESET << std::endl;
		EnergyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " has no energy or hit points to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints > amount)
	{
		HitPoints -= amount;
		std::cout << RED << "ClapTrap " << Name << " takes " << amount << " points of damage!" << RESET << std::endl;
	}
	else
	{
		HitPoints = 0;
		std::cout << "ClapTrap " << Name << " is out of hit points and can't take more damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		HitPoints += amount;
		EnergyPoints--;
		std::cout << BLUE << "ClapTrap " << Name << " repairs itself, recovering " << amount << " hit points!" << RESET << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " has no energy or hit points to repair itself!" << std::endl;
	}
}

std::string ClapTrap::getName() const
{
	return (this->Name);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->HitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->EnergyPoints);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->AttackDamage);
}

void ClapTrap::printStats() const
{
	std::cout << GREEN << "\nStatistiques pour " << Name << ":" << RESET << std::endl;
	std::cout << "Points de vie: " << HitPoints << std::endl;
	std::cout << "Points d'énergie: " << EnergyPoints << std::endl;
	std::cout << "Dégâts d'attaque: " << AttackDamage << std::endl;
}
