#include "Character.h"

Character::Character() : _name("noName")
{
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(const std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

Character::Character(const Character &src)
{
	this->_name = src._name;
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if(src._inventory[i])
		{
			if(src._inventory[i]->getType() == "ice")
				this->_inventory[i] = new Ice();
			else if (src._inventory[i]->getType() == "cure")
				this->_inventory[i] = new Cure();
		}
	}
}

Character &Character::operator=(const Character &src)
{
	this->_name = src._name;
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if(src._inventory[i])
		{
			if(src._inventory[i]->getType() == "ice")
				this->_inventory[i] = new Ice();
			else if (src._inventory[i]->getType() == "cure")
				this->_inventory[i] = new Cure();
		}
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while(i < 4 && this->_inventory[i] != NULL)
		i++;
	if(i == 4)
		return ;
	if(!m)
		return ;
	AMateria *tmp = 0;
	if(m->getType() == "ice")
	{
		tmp = new Ice();
	}
	else if (m->getType() == "cure")
	{
		tmp = new Cure();
	}
	this->_inventory[i] = tmp;
}

void Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if(idx >= 0 && idx < 4 && this->_inventory[idx])
		(this->_inventory[idx])->use(target);
}