#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(Dog const & src);
	Dog& operator=(Dog const & src);
	virtual void makeSound() const;
};


#endif //CPP_DOG_HPP
