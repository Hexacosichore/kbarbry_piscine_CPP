#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default constructor for Brain." << std::endl;
}

Brain::Brain( const Brain &copyClass ) {
	std::cout << "Copy constructor for Brain." << std::endl;
	*this = copyClass;
}

Brain	&Brain::operator=( const Brain &equalClass) {
	if (this != &equalClass) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = equalClass._ideas[i];
	}
	return *this;
}

Brain::~Brain( void ) {
	std::cout << "Destructor for Brain." << std::endl;
}
