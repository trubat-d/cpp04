#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "OuAFOUAFOUAFOUAFOUAFOUAF !!!" << std::endl;
}