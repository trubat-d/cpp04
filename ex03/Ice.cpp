#include "Ice.h"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice &src) : AMateria(src)
{
	this->_type = src._type;
}

Ice &Ice::operator=(const Ice &src)
{
	this->_type = src._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria* ret = new Ice();
	return (ret);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}