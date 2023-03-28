#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
								Cat();
								Cat(Cat const & src);
	virtual 					~Cat();
	Cat& 						operator=(Cat const & src);
	virtual void 				makeSound() const;
	virtual Brain*				getBrain() const;
private:
	Brain*						_brain;
};


#endif //CPP_CAT_HPP
