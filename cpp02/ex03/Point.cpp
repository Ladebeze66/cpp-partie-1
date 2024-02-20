/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:06:12 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 22:38:12 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Définitions de couleur pour les logs
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

// Constructeur par défaut
Point::Point() : x(0), y(0)
{
	std::cout << GREEN << "Default constructor called (Point):\n x(0), y(0)" << RESET << std::endl;
}

// Constructeur qui initialise x et y avec des flottants
Point::Point(float const xVal, float const yVal) : x(xVal), y(yVal)
{
	std::cout << CYAN << "Float constructor called (Point):\n x(" << xVal << "), y(" << yVal << ")" << RESET << std::endl;
}

// Constructeur de recopie
Point::Point(Point const &other) : x(other.getX()), y(other.getY())
{
	std::cout << YELLOW << "Copy constructor called (Point):\n x(" << other.getX() << "), y(" << other.getY() << ")" << RESET << std::endl;
}

// Opérateur d'affectation
Point &Point::operator=(Point const &other)
{
	// Comme x et y sont constants, ils ne peuvent être réaffectés.
	std::cout << RED << "Attempt to use copy assignment operator on Point, which is not allowed due to const members." << RESET << std::endl;
	return (*this);  // Retourne une référence à l'instance actuelle
}

// Destructeur
Point::~Point()
{
	std::cout << RED << "Destructor called (Point):\n x(" << this->x << "), y(" << this->y << ")" << RESET << std::endl;
}

// Getters pour accéder aux coordonnées x et y
Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}
