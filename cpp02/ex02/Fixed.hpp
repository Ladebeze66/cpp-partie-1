/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:12:09 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 21:26:38 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath> // Pour roundf

class	Fixed
{
	public:
		Fixed(); // Constructeur par défaut
		Fixed(const int intValue); // Constructeur avec un entier
		Fixed(const float floatValue); // Constructeur avec un flottant
		Fixed(const Fixed &other); // Constructeur de recopie
		Fixed &operator=(const Fixed &other); // Opérateur d'affectation
		~Fixed(); // Destructeur

	float	toFloat(void) const; // Convertit en flottant
	int	toInt(void) const; // Convertit en entier
	// Surcharge des opérateurs de comparaison
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	// Surcharge des opérateurs arithmétiques
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	// Surcharge des opérateurs d'incrémentation et de décrémentation
	Fixed operator++();    // Pré-incrémentation
	Fixed operator++(int);  // Post-incrémentation
	Fixed operator--(int);
	Fixed operator--();

	// Fonctions membres statiques
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

	private:
		int	value; // Valeur du nombre à virgule fixe
		static const int fractionalBits = 8; // Nombre de bits de la partie fractionnaire
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed); // Surcharge de l'opérateur d’insertion << ésentation en virgule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream)

#endif
