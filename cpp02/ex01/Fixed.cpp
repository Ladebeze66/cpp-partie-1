/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:32:07 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 20:54:35 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

Fixed::Fixed() : value(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const int intValue) : value(intValue << fractionalBits)//Ce décalage vers la gauche revient à multiplier l'entier par 2^fractionalBits, plaçant ainsi la virgule virtuellement après les 8 bits de droite.
{
	std::cout << CYAN << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(const float floatValue) : value(roundf(floatValue * (1 << fractionalBits)))//Vous multipliez le flottant par 2^fractionalBits pour décaler la virgule vers la droite de 8 positions, puis arrondissez le résultat à l'entier le plus proche pour ne pas perdre la précision.
{
	std::cout << CYAN << "Float constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &other) : value(other.value)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	value = other.value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << fractionalBits)); //Vous divisez la valeur entière représentant le nombre à virgule fixe par 2^fractionalBits. Cela décale la virgule virtuellement vers la gauche de 8 positions, vous donnant la valeur flottante originale.
}

int Fixed::toInt(void) const
{
	return (value / (1 << fractionalBits)); // Convertit en entier
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat(); // Affiche en tant que flottant
	return (stream);
}
