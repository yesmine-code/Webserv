#include "webserv.hpp"


int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << "usage: " << argv[0] << " [config_file]" << std::endl;
		std::cout << "	config_file: Path to a configuration file." << std::endl;
		return (1);
	}
	
	Webserv		webserv;

	webserv.load(argc > 1 ? argv[1] : "./config/webserv.conf");

	return (0);
}