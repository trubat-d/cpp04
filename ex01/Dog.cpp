#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	this->_brain = src._brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	this->_brain = src._brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "OuAFOUAFOUAFOUAFOUAFOUAF !!!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->_brain;
}