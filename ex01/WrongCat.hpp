#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const & src);
	WrongCat& operator=(WrongCat const & src);
	void makeSound() const;
};

#endif //CPP_WRONGCAT_HPP
