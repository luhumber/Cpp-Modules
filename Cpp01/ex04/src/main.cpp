/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:05:59 by lucas             #+#    #+#             */
/*   Updated: 2023/08/02 13:32:44 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	sed(std::string line, std::string s1, std::string s2)
{
	size_t	pos;

	if (s1 == s2)
		return (line);
	pos = 0;
	pos = line.find(s1, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos);
	}
	
	return (line);
}

int main(int argc, char **argv)
{
	std::string     filename, filename_replace, s1, s2, line;
	std::fstream    file_in, file_out;

	if (argc != 4)
	{
		std::cout << "Invalid number of arguments..." << std::endl;
		return (1);
	}
	
	filename = argv[1];
	filename_replace = filename;
	filename_replace.append(".replace");
	s1 = argv[2];
	s2 = argv[3];
	
	file_in.open(filename.c_str(), std::ios::in);
	if (!file_in)
	{
		std::cout << filename << " cannot be opened" << std::endl;
		return (1);
	}
	
	file_out.open(filename_replace.c_str(), std::ios::out);
	if (!file_out)
	{
		std::cout << filename_replace << " cannot be opened" << std::endl;
		return (1);
	}

	std::getline(file_in, line, '\0');
	file_in.close();
	if (line.empty())
	{
		std::cout << "File cannot be empty" << std::endl;
		file_out.close();
		return (1);
	}
	line = sed(line, s1, s2);
	file_out << line << std::flush;
	
	file_out.close();
	return (0);
}
