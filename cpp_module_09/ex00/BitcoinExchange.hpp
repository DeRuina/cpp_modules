#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <map>
#include <string>
#include <iostream>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, double> data;

		std::map<std::string, double> parce_exchange();

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &src);
		~BitcoinExchange();


};

#endif
