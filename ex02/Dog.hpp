#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
									Dog();
									Dog(Dog const & src);
	virtual 						~Dog();
	Dog& 							operator=(Dog const & src);
	virtual void 					makeSound() const;
	virtual Brain*					getBrain() const;
private:
	Brain*							_brain;
};


#endif //CPP_DOG_HPP
