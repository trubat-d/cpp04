#include "Cure.h"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure &src) : AMateria("cure")
{
	this->_type = src._type;
}

Cure &Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria* ret = new Cure();
	*ret = *this;
	return (ret);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}