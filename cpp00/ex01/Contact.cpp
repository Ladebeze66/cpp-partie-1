/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:17:14 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/23 20:52:55 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void	Contact::SetDetails()
{
	std::cout << "First Name: ";
	std::cin >> _first_name;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Last Name: ";
	std::cin >> _last_name;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Nickname: ";
	std::cin >> _nickname;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (true)
	{
		std::cout << "Phone Number: ";
		std::cin >> _phone_number;

		bool isValid = true;
		for (char c : _phone_number)
		{
			if (!std::isdigit(c))
			{
				isValid = false;
				break;
			}
		}
	if (isValid)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
		else
		{
			std::cout << "Invalid input. A phone number should contain only digits (0-9)." << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _darkest_secret);
}

Contact::~Contact() {}

void	Contact::DisplaySummary(int index) const
{
	std::string redBar = "\033[31m|\033[0m";
	std::cout << std::setw(8) << index << redBar;
	if (_first_name.length() > 10)
	{
		std::cout << std::setw(10) << _first_name.substr(0,9) + "." << redBar;
	}
	else
	{
		std::cout << std::setw(10) << _first_name << redBar;
	}
	if (_last_name.length() > 10)
	{
		std::cout << std::setw(10) << _last_name.substr(0,9) + "." << redBar;
	}
	else
	{
		std::cout << std::setw(10) << _last_name << redBar;
	}
	if (_nickname.length() > 10)
	{
		std::cout << std::setw(10) << _nickname.substr(0,9) + "." << redBar;
	}
	else
	{
		std::cout << std::setw(10) << _nickname << redBar;
	}
	std::cout << std::endl;
}

void	Contact::DisplayDetails() const
{
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
}