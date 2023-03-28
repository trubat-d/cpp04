#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public:
						Brain();
						Brain(const Brain &src);
						~Brain();
	Brain&				operator=(const Brain &src);
	const std::string	getIdea(const int id) const;
	void				setIdea(const int id, const std::string idea);
private:
	std::string	_ideas[100];
};


#endif //CPP_BRAIN_HPP
