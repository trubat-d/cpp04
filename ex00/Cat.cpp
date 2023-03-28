#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIIIIIIAAAAAAAAAAOOOOOOOOOOUUUUUUUUUUUU !!!" << std::endl;
}