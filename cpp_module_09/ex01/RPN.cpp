#include "RPN.hpp"

static double do_op(double num1, char c, double num2)
{
	if (c == '+')
		return (num1 + num2);
	if (c == '-')
		return (num1 - num2);
	if (c == '*')
		return (num1 * num2);
	if (c == '/')
		return (num1 / num2);
	return(0);
}

void RPN::solve(std::string input)
{
	std::stack<double> stack;
	double num1, num2;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] >= '0' && input[i] <= '9')
			stack.push(input[i] - '0');
		else if ((input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') && stack.size() > 1)
		{
			num2 = stack.top();
			stack.pop();
			num1 = stack.top();
			stack.pop();
			stack.push(do_op(num1, input[i], num2));
		}
		else if (std::isspace(input[i]))
			continue;
		else
			throw std::exception();
	}
	std::cout << stack.top() << std::endl;
}
