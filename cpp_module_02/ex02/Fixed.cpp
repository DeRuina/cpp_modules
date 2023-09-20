#include "Fixed.hpp"

// Constructors / Destructors

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

//Getter / Setter

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

// toFloat / toInt

float Fixed::toFloat(void) const
{
	return (((float)x / (float)(1 << this->y)));
}

int Fixed::toInt(void) const
{
	return (x >> this->y);
}

//Comparison Operators Overload

bool Fixed::operator==(const Fixed &equal)
{
	return (this->x == equal.getRawBits());
}

bool Fixed::operator!=(const Fixed &not_equal)
{
	return (this->x == not_equal.getRawBits());
}

bool Fixed::operator<=(const Fixed &bigger_equal)
{
	return (this->x <= bigger_equal.getRawBits());
}

bool Fixed::operator>=(const Fixed &smaller_equal)
{
	return (this->x >= smaller_equal.getRawBits());
}

bool Fixed::operator>(const Fixed &smaller)
{
	return (this->x > smaller.getRawBits());
}

bool Fixed::operator<(const Fixed &bigger)
{
	return (this->x < bigger.getRawBits());
}

//Arithmetic Operators Overload

Fixed Fixed::operator+(const Fixed &add)
{
	return(Fixed(this->toFloat() + add.toFloat()));
}

Fixed Fixed::operator-(const Fixed &subtract)
{
	return(Fixed(this->toFloat() - subtract.toFloat()));
}

Fixed Fixed::operator*(const Fixed &multiply)
{
	return(Fixed(this->toFloat() * multiply.toFloat()));
}

Fixed Fixed::operator/(const Fixed &divide)
{
	if (divide.getRawBits() != 0)
		return(Fixed(this->toFloat() / divide.toFloat()));
	else
		return (std::cout << "can't divide by zero" << std::endl, Fixed());
}

//Prefix

Fixed &Fixed::operator++()
{
	this->x++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->x--;
	return (*this);
}

//Postfix

Fixed Fixed::operator++(int)
{
	Fixed postfix(*this);
	this->x++;
	return(postfix);
}

Fixed Fixed::operator--(int)
{
	Fixed postfix(*this);
	this->x--;
	return(postfix);
}

//Min / Max

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
	if (x.getRawBits() < y.getRawBits())
		return (x);
	else
		return (y);
}

const Fixed &Fixed::min(const Fixed &x, const Fixed &y)
{
	if (x.getRawBits() < y.getRawBits())
		return (x);
	else
		return (y);
}
Fixed &Fixed::max(Fixed &x, Fixed &y)
{
	if (x.getRawBits() > y.getRawBits())
		return (x);
	else
		return (y);
}

const Fixed &Fixed::max(const Fixed &x, const Fixed &y)
{
	if (x.getRawBits() > y.getRawBits())
		return (x);
	else
		return (y);
}

//Insertion Overload

std::ostream &operator<<(std::ostream &OUT,const Fixed &fixed)
{
	OUT << fixed.toFloat();
	return (OUT);
}
