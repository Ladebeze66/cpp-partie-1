/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:52:45 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 22:23:40 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	public:
		Point();  // Constructeur par défaut
		Point(float const x, float const y);  // Constructeur avec deux flottants
		Point(Point const &other);  // Constructeur de recopie
		Point &operator=(Point const &other);  // Opérateur d'affectation
		~Point();  // Destructeur

		// Getters pour accéder aux coordonnées x et y
		Fixed getX() const;
		Fixed getY() const;

	private:
		Fixed const x;  // Coordonnée x du point
		Fixed const y;  // Coordonnée y du point
};

#endif
