#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Error: wrong argument count << std::endl", 1);
	RPN::solve(argv[1]);
	return (0);
}
