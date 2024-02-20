/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:12:29 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 19:21:28 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	std::cout << "Création de l'objet a avec le constructeur par défaut." << std::endl;
	Fixed a;
	std::cout << "Valeur de a après création : " << a.getRawBits() << std::endl;

	std::cout << "\nCréation de l'objet b par copie de l'objet a." << std::endl;
	Fixed b(a);
	std::cout << "Valeur de b après la copie : " << b.getRawBits() << std::endl;

	std::cout << "\nAssignation de l'objet c à l'objet b." << std::endl;
	Fixed c;
	c = b;
	std::cout << "Valeur de c après l'assignation : " << c.getRawBits() << std::endl << std::endl;

	return (0);
}
