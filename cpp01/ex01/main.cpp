/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:17:37 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/24 15:32:08 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	N;
	std::cout << "\033[32m";
	std::cout << "Entrez le nombre de zombies à créer: ";
	std::cout << "\033[0m";
	std::cin >> N;
	if(std::cin.fail() || N < 1)
	{
		std::cerr << "\033[31m";
		std::cerr << "Entrée invalide. Veuillez entrer un nombre entier positif!!" << std::endl;
		std::cerr << "\033[0m";
		return (1);
	}
	Zombie*	horde = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}