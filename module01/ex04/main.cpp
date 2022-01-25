#include <fstream>
#include <iostream>

int	main(int ac, char *av[]){
	std::string		ifile(av[1]);
	std::ifstream	read_file;
	std::ofstream	write_file;
	std::string		line;

	if (ac != 4 || ifile.length() == 0)
	{
		std::cout << "[usage] ./replace filename string_to_find string_to_replace" << std::endl;
		return (1);
	}
	read_file.open(ifile);
	if (read_file.fail()){
		std::cout << "[error] cannot open '" << ifile << "'" << std::endl;
		return (1);
	}
	write_file.open(ifile + ".replace");
	if (write_file.fail()){
		std::cout << "[error] cannot write '" << ifile << ".replace'" << std::endl;
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
