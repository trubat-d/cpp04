#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string const type);
	Animal(Animal const & other);
	virtual ~Animal();
	Animal& operator=(Animal const & other);
	virtual void	makeSound() const;
	std::string 	getType(void) const;
protected:
	std::string _type;
};


#endif //CPP_ANIMAL_HPP
