#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Error: Not enough arguments" << std::endl, 1);
	BitcoinExchange ex;
	if (ex.get_is_good() == false)
		return (1);
	try
	{
		ex.your_portfolio_values(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: Failed to read input file" << std::endl;
		return (1);
	}
	return (0);
}
