#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string const type);
	WrongAnimal(WrongAnimal const & other);
	~WrongAnimal();
	WrongAnimal& operator=(WrongAnimal const & other);
	void	makeSound() const;
	std::string 	getType(void) const;
protected:
	std::string _type;
};



#endif //CPP_WRONGANIMAL_HPP
