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
		std::cerr << "Error: could not open file." << std::endl;
	}
	std::string line;
	std::getline(inFile, line);
	std::map<std::string, double> data;
	char *end;
	while (std::getline(inFile, line))
		data.insert(std::pair<std::string, double>(std::strtok((char *)line.c_str(), ","), std::strtod(std::strtok(NULL, ","), &end)));
	return (data);
}
void BitcoinExchange::check_value(std::string &line, std::string &date, double &value)
{
	char *end;
	size_t found = line.find(" | ", 10);
	if (found == std::string::npos)
		throw 1;
	date = std::strtok((char *)line.c_str(), " |");
	value = std::strtod(std::strtok(NULL, " |"), &end);
	if (value < 0)
		throw 2;
	if (value > 1000)
		throw 3;

}

void BitcoinExchange::your_portfolio_values(std::string inputFile)
{
	std::ifstream inFile;
	try
	{
		inFile.open(inputFile, std::ifstream::in);
	}
	catch(std::exception& e)
	{
		std::cerr << "Error: Failed to read data.csv exchange file" << std::endl;
	}
	std::string line, date;
	std::getline(inFile, line);
	double value;
	// int year, month, day;
	while (std::getline(inFile, line))
	{
		try
		{
			check_value(line,date, value);
		}
		catch(int e)
		{
			if (e == 1)
			{
				std::cout << "Error: bad input" << "=>" << line << std::endl;
				continue;
			}
			if (e == 2)
			{
				std::cout << "Error: not a positive number." << std::endl;
				continue;
			}
			if (e == 3)
			{
				std::cout << "Error: too large a number." << std::endl;
				continue;
			}
		}
		std::cout << date << "=>" << value << std::endl;
	}
}
