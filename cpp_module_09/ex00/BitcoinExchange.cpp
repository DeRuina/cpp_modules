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

void BitcoinExchange::print_date_or_closest_date(std::string &date, double &value, int dateArr[3])
{
	int day, month, year;
	year = dateArr[0];
	month = dateArr[1];
	day = dateArr[2];
	if (this->data.count(date))
	{
		std::cout << date << " => " << value << " = " << value * this->data[date] << std::endl;
		return;
	}
	while (year > 2008)
	{
		while (month > 0)
		{
			while (day > 0)
			{
				std::ostringstream convert;
				if (month < 10)
				{
					if (day < 10)
						convert << year << '-' << std::setw(2) << std::setfill('0') << month <<  '-' << std::setw(2) << std::setfill('0') <<  day;
					else
						convert << year << '-' << std::setw(2) << std::setfill('0') << month <<  '-' << day;
				}
				else if (day < 10)
					convert << year << '-' << month <<  '-' << std::setw(2) << std::setfill('0') <<  day;
				else
					convert << year << '-' << month <<  '-' <<  day;
				std::string new_date(convert.str());
				if (this->data.count(new_date))
				{
					std::cout << date << " => " << value << " = " << value * this->data[new_date] << std::endl;
					return;
				}
				day--;
			}
			day = 31;
			month--;
		}
		month = 12;
		year--;
	}
	std::cout << "Error: bad input" << "=>" << date << std::endl;
}

void BitcoinExchange::check_value_and_date(std::string &line, std::string &date, double &value, int dateArr[3])
{
	char *end;
	size_t found = line.find(" | ", 10);
	if (found == std::string::npos)
		throw 1;
	date = std::strtok((char *)line.c_str(), " |");
	std::string datecopy(date);
	if (date.length() < 9 || (date.at(4) != '-' && date.at(7) != '-') || date.at(5) == '-' || date.at(8) == '-')
		throw 1;
	value = std::strtod(std::strtok(NULL, " |"), &end);
	if (value < 0)
		throw 2;
	if (value > 1000)
		throw 3;
	int day, month, year;
	int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	year = std::atoi(strtok((char *)datecopy.c_str(), "-"));
	month = std::atoi(strtok(NULL, "-"));
	day = std::atoi(strtok(NULL, "-"));
	if (month > 12 || month < 1)
		throw 1;
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		months[1]++;
	if (day > months[month - 1] || day < 1)
		throw 1;
	dateArr[0] = year;
	dateArr[1] = month;
	dateArr[2] = day;
}

void BitcoinExchange::your_portfolio_values(std::string inputFile)
{
	std::ifstream inFile;
	try
	{
		inFile.open(inputFile.c_str(), std::ifstream::in);
	}
	catch(std::exception& e)
	{
		std::cerr << "Error: Failed to read data.csv exchange file" << std::endl;
	}
	std::string line, date;
	std::getline(inFile, line);
	double value;
	int dateArray[3];
	while (std::getline(inFile, line))
	{
		try
		{
			check_value_and_date(line,date, value, dateArray);
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
		print_date_or_closest_date(date, value, dateArray);
	}
}
