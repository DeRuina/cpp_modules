#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Error: wrong argument count" << std::endl, 1);
	try
	{
		RPN::solve(argv[1]);
	}
	catch(std::exception& e)
	{
		std::cout << "Error: wrong input" << std::endl;
	}
	return (0);
}
