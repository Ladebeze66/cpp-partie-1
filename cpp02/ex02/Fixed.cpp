/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:32:07 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 21:41:52 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"
#define BLUE    "\033[34m"

// Constructeur par défaut
Fixed::Fixed() : value(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

// Constructeur avec un entier
Fixed::Fixed(const int intValue) : value(intValue << fractionalBits)
{
	std::cout << CYAN << "Int constructor called" << RESET << std::endl;
}

// Constructeur avec un flottant
Fixed::Fixed(const float floatValue) : value(roundf(floatValue * (1 << fractionalBits)))
{
	std::cout << CYAN << "Float constructor called" << RESET << std::endl;
}

// Constructeur de recopie
Fixed::Fixed(const Fixed &other) : value(other.value)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
}

// Opérateur d'affectation
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		this->value = other.value;
    }
	return (*this);
}

// Destructeur
Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

// Conversion en flottant
float Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << fractionalBits));
}

// Conversion en entier
int	Fixed::toInt(void) const
{
	return (value >> fractionalBits);
}

// Opérateur de sortie
std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

// Opérateurs de comparaison
bool	Fixed::operator>(const Fixed &other) const
{
	return (this->value > other.value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->value <= other.value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->value >= other.value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->value == other.value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.value);
}

// Opérateurs arithmétiques (exemple avec +, -, *, /)
Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

// Opérateurs d'incrémentation et de décrémentation
Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return (temp);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return (temp);
}

// Fonctions membres statiques min/max
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}
