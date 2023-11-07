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
	for (int i = 0; i < input.length(); i++)
	{
		if (std::isdigit(input[i] + '0'))
			stack.push(input[i]);
		else if ((input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') && stack.size() == 2)
		{
			num1 = stack.top();
			stack.pop();
			num2 = stack.top();
			stack.pop();
			stack.push(do_op(num1, input[i], num2));
		}
		else
			throw std::exception();
	}
}
