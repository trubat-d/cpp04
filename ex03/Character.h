#ifndef CPP_CHARACTER_H
#define CPP_CHARACTER_H

#include "ICharacter.h"
#include "Ice.h"
#include "Cure.h"


class Character : public ICharacter
{
public:
	Character();
	Character(const std::string name);
	Character(const Character &src);
	virtual ~Character();
	Character &operator=(const Character &src);
	virtual const std::string & getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
private:
	std::string	_name;
	AMateria* _inventory[4];
};


#endif //CPP_CHARACTER_H
