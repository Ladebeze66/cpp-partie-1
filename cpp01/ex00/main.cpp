/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:52:26 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/24 14:04:53 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete	heapZombie;
	std::cout << "\033[31m";
	std::cout << "HeapZombie Deleted!!" << std::endl << std::endl;
	std::cout << "\033[0m";
	randomChump("StackZombie");

	return (0);
}