/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:41:21 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/24 15:50:11 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adresse de str : " << &str << std::endl;
	std::cout << "Adresse contenue dans stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse contenue dans stringREF : " << &stringREF << std::endl << std::endl;

	std::cout << "Valeur de str : " << str << std::endl;
	std::cout << "Valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "Valeur pointée par stringREF : " << stringREF << std::endl;

	return (0);
}