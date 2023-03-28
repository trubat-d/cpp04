#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat : constructor" << std::endl;
}

Cat::Cat(const Cat &src)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat : copy constructor" << std::endl;
	this->_brain = src._brain;
}

Cat::~Cat()
{
	std::cout << "Cat : destructor" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	this->_brain = src._brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIIIIIIAAAAAAAAAAOOOOOOOOOOUUUUUUUUUUUU !!!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}