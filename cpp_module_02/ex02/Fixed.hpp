#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int x;
		static const int y = 8;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &src);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool operator==(const Fixed &equal);
		bool operator!=(const Fixed &not_equal);
		bool operator<=(const Fixed &bigger_equal);
		bool operator>=(const Fixed &smaller_equal);
		bool operator>(const Fixed &smaller);
		bool operator<(const Fixed &bigger);

		Fixed operator+(const Fixed &add);
		Fixed operator-(const Fixed &subtract);
		Fixed operator*(const Fixed &multiply);
		Fixed operator/(const Fixed &divide);

		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &max(Fixed &x, Fixed &y);
		static const Fixed &max(const Fixed &x, const Fixed &y);
		static Fixed &min(Fixed &x, Fixed &y);
		static const Fixed &min(const Fixed &x, const Fixed &y);


};

std::ostream &operator<<(std::ostream &OUT,const Fixed &fixed);
#endif
