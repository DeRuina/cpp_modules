#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iostream>
#include <string>
#include <exception>
#include <sstream>
#include <limits>
#include <iomanip>

class ScalarConverter
{
	private:
			ScalarConverter();
			ScalarConverter(const ScalarConverter &copy);
			ScalarConverter &operator=(const ScalarConverter &src);
			~ScalarConverter();

	public:
			static void convert(std::string str);

};



#endif
