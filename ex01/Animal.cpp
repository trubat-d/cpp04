#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal parameter constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "*inaudible sound of an animal*" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

Brain *Animal::getBrain() const
{
	return (NULL);
}