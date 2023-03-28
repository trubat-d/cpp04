#ifndef CPP_MATERIASOURCE_H
#define CPP_MATERIASOURCE_H

#include "IMateriaSource.h"
#include "Ice.h"
#include "Cure.h"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &src);
	virtual void learnMateria(AMateria *materia);
	virtual AMateria * createMateria(std::string const & type);
private:
	AMateria*	_src[4];
};


#endif //CPP_MATERIASOURCE_H
