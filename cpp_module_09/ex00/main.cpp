#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Error: Not enough arguments" << std::endl, 1);
	BitcoinExchange ex;
	ex.your_portfolio_values(argv[1]);
	return (0);
}
