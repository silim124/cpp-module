/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:09:35 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:09:36 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int ac, char *av[]){
	std::string		line;

	if (ac != 4 || av[2][0] == 0 || av[3][0] == 0)
	{
		std::cout << "[usage] ./ex04 filename string_to_find string_to_replace" << std::endl;
		return (1);
	}
	else {
		std::ifstream	read_file(av[1]);
		if (!read_file.is_open()){
			std::cout << "[error] cannot open '" << av[1] << "'" << std::endl;
			return (1);
		}
		std::ofstream	write_file;
		write_file.open((std::string)av[1] + ".replace");
		if (write_file.fail()){
			std::cout << "[error] cannot write '" << (std::string)av[1] + ".replace'" << std::endl;
			return (1);
		}
		while (std::getline(read_file, line)){
			size_t idx = line.find(av[2]);
			while (idx != std::string::npos)
			{
				write_file << line.substr(0, idx) << av[3];
				line = line.substr(idx + std::strlen(av[2]));
				idx = line.find(av[2]);
			}
			write_file << line << '\n';
		}
	}
}
