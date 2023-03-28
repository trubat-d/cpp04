#ifndef CPP_AMATERIA_H
#define CPP_AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.h"

class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(const AMateria &src);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &src);

	AMateria(std::string const & type);
	std::string	const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	std::string _type;
};


#endif //CPP_AMATERIA_H
