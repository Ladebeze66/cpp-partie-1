/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:01:39 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/23 20:52:57 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : next_index(0), total_contacts(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::AddContact()
{
	contacts[next_index].SetDetails();
	next_index = (next_index + 1) % 8;
	if (total_contacts < 8)
	{
		total_contacts++;
	}
	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::SearchContact() const
{
	std::cout << "\033[31m";
	std::cout << "------------------------------------------" << std::endl;
	std::cout	<< std::setw(8) << "Index" << "|"
				<< std::setw(10) << "First" << "|"
				<< std::setw(10) << "Last" << "|"
				<< std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "\033[0m";
	for (int i = 0; i < total_contacts; ++i)
	{
		contacts[i].DisplaySummary(i + 1);
	}
	std::cout << "\033[31m";
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "\033[0m";
	while (true)
	{
		std::cout << "Enter the index of the contact to display: ";
		int	index;
		std::cin >> index;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a number." << std::endl;
		}
		else if (index < 1 || index > total_contacts)
		{
			std::cout << "Invalid index. Please enter a number between 1 and " << total_contacts << "." << std::endl;
		}
		else
		{
			contacts[index - 1].DisplayDetails();
			break;
		}
	}
}