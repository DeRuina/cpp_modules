#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <map>
#include <string>

class BitcoinExchange
{
	private:
		std::map<std::string, double> data;

		std::map<std::string, double> parce_exchange(std::string fileName);

	public:
		BitcoinExchange(std::string fileName);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &src);
		~BitcoinExchange();


};

#endif
