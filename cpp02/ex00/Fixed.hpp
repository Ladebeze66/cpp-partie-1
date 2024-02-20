/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:53:10 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 19:02:13 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		Fixed();	 // Constructeur par défaut
		Fixed(const Fixed &other);	// Constructeur de recopie
		Fixed & operator=(const Fixed &other);	// Opérateur d'affectation
		~Fixed();	// Destructeur


		int	getRawBits(void) const;	// Retourne la valeur brute
		void	setRawBits(int const raw);	// Initialise la valeur brute

	private:
	int	value;	// Valeur du nombre à virgule fixe
	static const int fractionalBits = 8;	// Nombre de bits de la partie fractionnaire
};

#endif