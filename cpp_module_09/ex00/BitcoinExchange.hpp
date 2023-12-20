#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <map>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, double> data;
		bool is_good;

		std::map<std::string, double> parce_exchange();
		void check_value_and_date(std::string &line, std::string &date, double &value, int dateArr[3]);
		void print_date_or_closest_date(std::string &date, double &value, int dateArr[3]);


	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &src);
		~BitcoinExchange();

		void your_portfolio_values(std::string inputFile);
		bool get_is_good();

};

#endif
