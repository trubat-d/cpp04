#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		this->_src[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_src[i])
		{
			delete this->_src[i];
			this->_src[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_src[i])
		{
			delete this->_src[i];
			this->_src[i] = NULL;
		}
		if(src._src[i])
		{
			if(src._src[i]->getType() == "ice")
				this->_src[i] = new Ice();
			else if (src._src[i]->getType() == "cure")
				this->_src[i] = new Cure();
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_src[i])
		{
			delete this->_src[i];
			this->_src[i] = NULL;
		}
		if(src._src[i])
		{
			if(src._src[i]->getType() == "ice")
				this->_src[i] = new Ice();
			else if (src._src[i]->getType() == "cure")
				this->_src[i] = new Cure();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for(int i = 0; i < 4; i++)
	{
		if(!this->_src[i])
		{
			AMateria *tmp = 0;
			if(materia->getType() == "ice")
			{
				tmp = new Ice();
			}
			else if (materia->getType() == "cure")
			{
				tmp = new Cure();
			}
			this->_src[i] = tmp;
			break;
		}
	}
	delete materia;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_src[i])
		{
			if(this->_src[i]->getType() == type)
			{
				AMateria* ret = 0;
				if(type == "ice")
					ret = new Ice();
				else if (type == "cure")
					ret = new Cure();
				return  ret;
			}
		}
	}
	return (0);
}