#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(Cat const & src);
	Cat& operator=(Cat const & src);
	virtual void makeSound() const;
};


#endif //CPP_CAT_HPP
