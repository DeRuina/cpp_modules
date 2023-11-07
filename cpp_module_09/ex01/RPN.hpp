#ifndef RPN_H
#define RPN_H

#include <string>
#include <iostream>
#include <exception>
#include <stack>

class RPN
{
	private:
		RPN();
		RPN(const RPN &copy);
		RPN &operator=(const RPN &src);
		~RPN();

	public:
		void solve(std::string input);

};


#endif
