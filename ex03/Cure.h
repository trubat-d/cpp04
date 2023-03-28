#ifndef CPP_CURE_H
#define CPP_CURE_H

#include "AMateria.h"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &src);
	~Cure();
	Cure &operator=(const Cure &src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif //CPP_CURE_H
