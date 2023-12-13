#include "Base.hpp"

int main(void)
{
	std::srand(std::time(NULL));

	Base *type1 = generate();
	Base *type2 = generate();
	Base *type3 = generate();
	Base *type4 = generate();

	Base &reftype1 = *type1;
	Base &reftype2 = *type2;
	Base &reftype3 = *type3;
	Base &reftype4 = *type4;

	identify(type1);
	identify(type2);
	identify(type3);
	identify(type4);

	identify(reftype1);
	identify(reftype2);
	identify(reftype3);
	identify(reftype4);

	delete type1;
	delete type2;
	delete type3;
	delete type4;

	return (0);
}
