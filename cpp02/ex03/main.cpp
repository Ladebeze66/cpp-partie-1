/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:11:13 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 22:42:40 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"

// Fonction pour demander un point à l'utilisateur
Point	demanderPoint(const std::string &nomPoint)
{
	float x, y;
	std::cout << "Entrez la coordonnée x de " << nomPoint << ": ";
	std::cin >> x;
	std::cout << "Entrez la coordonnée y de " << nomPoint << ": ";
	std::cin >> y;
	return (Point(x, y));
}

int	main()
{
	// Test fixe : Créer un triangle et un point, puis tester avec la fonction bsp
	Point a(0.0f, 0.0f);
	Point b(1.0f, 0.0f);
	Point c(0.5f, 1.0f);
	Point pointFixe(0.5f, 0.5f);

	std::cout << "Test fixe:" << std::endl;
	std::cout << "Point à l'intérieur du triangle (0.5, 0.5) : \n" << (bsp(a, b, c, pointFixe) ? "Oui" : "Non") << std::endl;

	// Test dynamique : Demander à l'utilisateur de saisir les points
	std::cout << "\nTest dynamique:" << std::endl;
	Point aUser = demanderPoint("A");
	Point bUser = demanderPoint("B");
	Point cUser = demanderPoint("C");
	Point pointUser = demanderPoint("Point à tester");

	// Afficher si le point est à l'intérieur du triangle ou non
	std::cout << "Le point est à l'intérieur du triangle : " << (bsp(aUser, bUser, cUser, pointUser) ? "Oui" : "Non") << std::endl;

	return (0);
}
