#include "Base.hpp"

Base::~Base()
{}

Base *generate(void)
{
	int i = std::rand() % 3;
	if (i == 0)
		return (new A());
	else if (i  == 1)
		return (new B());
	else if (i == 2)
		return (new C());
	return (NULL);
}
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "object is type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "object is type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "object is type C" << std::endl;
	else
		std::cout << "Invalid type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "object is type A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "object is type B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "object is type C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
}




