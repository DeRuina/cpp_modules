#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class Fixed
{
	private:
		int x;
		static const int y = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
