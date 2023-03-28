#include "AMateria.h"

AMateria::AMateria()
{
	this->_type = "default materia";
}


AMateria::AMateria(const AMateria &src)
{
	this->_type = src._type;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	this->_type = type;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &src)
{
	this->_type = src._type;
	return (*this);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "This is a non-castable materia and " << target.getName() << " will not receive any effect !" << std::endl;
}

const std::string &AMateria::getType() const
{
	return this->_type;
}