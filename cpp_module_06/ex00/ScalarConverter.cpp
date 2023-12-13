#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str)
{
  char    c = 0;
  int     i = 0;
  float   f = 0;
  double  d = 0;

  bool print_c = true;
  bool print_int = true;

  if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
  {
    f = -std::numeric_limits<float>::infinity();
    d = -std::numeric_limits<double>::infinity();
    print_c = false;
    print_int = false;
  }
  else if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
  {
    f = std::numeric_limits<float>::infinity();
    d = std::numeric_limits<double>::infinity();
    print_c = false;
    print_int = false;
  }
   else if (str.compare("nan") == 0 || str.compare("nanf") == 0)
  {
    f = std::numeric_limits<float>::quiet_NaN();
    d = std::numeric_limits<double>::quiet_NaN();
    print_c = false;
    print_int = false;
  }
  else if (str.find('.') != std::string::npos && str.find('f') != std::string::npos)
  {
    try
    {
		if (*(str.rbegin()) == 'f')
		{
			str.pop_back();
			if (*(str.rbegin()) == 'f')
				throw std::exception();
		}
		else
			throw std::exception();
		std::stringstream ss(str);
		ss >> f;
    }
    catch (std::exception &e)
    {
      std::cout << "NICE TRY BRAT, INVALID INPUT" << std::endl;
      return ;
    }
    d = static_cast<double>(f);
    c = static_cast<char>(f);
    i = static_cast<int>(f);
  }
  else if (str.find('.') != std::string::npos)
  {
    try
    {
       std::stringstream ss(str);
		ss >> d;
    }
    catch (std::exception &e)
    {
      std::cout << "NICE TRY BRAT, INVALID INPUT" << std::endl;
      return ;
    }
    f = static_cast<float>(d);
    c = static_cast<char>(d);
    i = static_cast<int>(d);
  }
  else if (str.length() == 1 && !std::isdigit(str.at(0)))
  {
    c = str.at(0);
    f = static_cast<float>(c);
    d = static_cast<double>(c);
    i = static_cast<int>(c);
  }
  else
  {
     try
    {
		if (!std::isdigit(str.at(0)) || std::atol(str.c_str()) > 2147483648)
			throw std::exception();
      std::stringstream ss(str);
		ss >> i;

    }
    catch (std::exception &e)
    {
      std::cout << "NICE TRY BRAT, INVALID INPUT" << std::endl;
      return ;
    }
    f = static_cast<float>(i);
    c = static_cast<char>(i);
    d = static_cast<double>(i);
  }

  if (print_c == false)
    std::cout << "Char is not possible" << std::endl;
  else if (!std::isprint(c))
    std::cout << "Char is not displayable" << std::endl;
  else
    std::cout << "Char is " << c << std::endl;

  if (print_int == false)
     std::cout << "Int is not possible" << std::endl;
  else
    std::cout << "Int is " << i << std::endl;

  std::cout << "Float is " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
  std::cout << "Double is " << std::fixed << std::setprecision(1) << d << std::endl;


}
