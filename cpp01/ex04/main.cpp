/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:20:39 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 14:55:50 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "\033[32m";
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		std::cerr << "\033[0m";
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
	{
		std::cerr << "\031[33m";
		std::cerr << "Impossible d'ouvrir le fichier " << filename << std::endl;
		std::cerr << "\033[0m";
		return (1);
	}

	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	std::string content = buffer.str();
	inputFile.close();

	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		pos += s2.length();
	}

	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "\033[33m";
		std::cerr << "Impossible de céer le fichier " << filename + ".replace" << std::endl;
		std::cerr << "\033[30m";
		return (1);
	}

	outputFile << content;
	outputFile.close();

	return (0);
}