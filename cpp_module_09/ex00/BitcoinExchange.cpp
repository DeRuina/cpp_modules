#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	this->data = parce_exchange();
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	this->data.clear();
	this->data = src.data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

std::map<std::string, double> BitcoinExchange::parce_exchange()
{
	std::ifstream inFile;
	try
	{
		inFile.open("data.csv", std::ifstream::in);
	}
	catch(std::exception& e)
	{
		std::cerr << "Error: Failed to read data.csv exchange file" << std::endl;
	}
	std::string line;
	std::getline(inFile, line);
	std::map<std::string, double> data;
	char *end;
	while (std::getline(inFile, line))
		data.insert(std::pair<std::string, double>(std::strtok((char *)line.c_str(), ","), std::strtod(std::strtok(NULL, ","), &end)));
	return (data);
}
