#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor" << std::endl;
}

Brain::Brain(const Brain &src)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout << "Brain : copy constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain : assignment operator";
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

 const std::string Brain::getIdea(const int id) const
{
	if(id >= 0 && id < 100)
		return (this->_ideas[id]);
	else
		std::cout << "Brain : GetIdea : Invalid ID";
	return ("");
}

void Brain::setIdea(const int id, const std::string idea)
{
	if(id >= 0 && id < 100)
		this->_ideas[id] = idea;
	else
		std::cout << "Brain : SetIdea : Invalid ID";
}