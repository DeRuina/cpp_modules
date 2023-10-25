#include "Base.hpp"

Base::~Base()
{}

Base *generate(void)
{
	static int i;
	if (i % 3 == 0)
		return (i++, new A());
	else if (i % 3 == 1)
		return (i++, new B());
	else if (i % 3 == 2)
		return (i++, new C());
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




