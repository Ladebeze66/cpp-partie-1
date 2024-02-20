/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:16:58 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/23 18:31:05 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	command;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, or EXIT): ";
		std::cin >> command;

		if (command == "ADD")
		{
			phonebook.AddContact();
		}
		else if (command == "SEARCH")
		{
			phonebook.SearchContact();
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Command not recognized." << std::endl;
		}
	}
	return (0);
}