#ifndef CPP_IMATERIASOURCE_H
#define CPP_IMATERIASOURCE_H

#include "AMateria.h"

class IMateriaSource
{
public:
	virtual				~IMateriaSource() {};
	virtual void		learnMateria(AMateria *materia) = 0;
	virtual AMateria*	createMateria(std::string const &type) = 0;
};


#endif //CPP_IMATERIASOURCE_H
