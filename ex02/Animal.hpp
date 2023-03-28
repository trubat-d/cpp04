#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
								Animal();
								Animal(std::string const type);
								Animal(Animal const & other);
	virtual 					~Animal();
	Animal& 					operator=(Animal const & other);
	virtual void				makeSound() const = 0;
	virtual std::string 		getType(void) const;
	virtual	Brain*				getBrain() const = 0;
protected:
	std::string 				_type;
private:
};

#endif //CPP_ANIMAL_HPP
