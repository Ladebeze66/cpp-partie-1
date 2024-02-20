/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:34:03 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 15:38:28 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;

	std::cout << "Calling with DEBUG:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nCalling with INFO:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nCalling with WARNING:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nCalling with ERROR:" << std::endl;
	harl.complain("ERROR");

	return (0);
}