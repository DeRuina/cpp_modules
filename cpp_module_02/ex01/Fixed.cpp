#include "Fixed.hpp"

Fixed::Fixed() : x(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int num) : x(num << this->y)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : x(std::roundf(num * (1 << this->y)))
{
	std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->x = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->x);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->x = raw;
}
float Fixed::toFloat(void) const
{
	return (((float)x / (float)(1 << this->y)));
}

int Fixed::toInt(void) const
{
	return (x >> this->y);
}

std::ostream &operator<<(std::ostream &OUT,const Fixed &fixed)
{
	OUT << fixed.toFloat();
	return (OUT);
}
