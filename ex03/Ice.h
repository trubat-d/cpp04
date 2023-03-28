#ifndef CPP_ICE_H
#define CPP_ICE_H

#include "AMateria.h"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &src);
	virtual ~Ice();
	Ice &operator=(const Ice &src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif //CPP_ICE_H
