#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default constructor for Cat." << std::endl;
	_type = "Cat";
}

Cat::Cat( const Cat &copyClass ) {
	std::cout << "Copy constructor for Cat." << std::endl;
	*this = copyClass;
}

Cat	&Cat::operator=( const Cat &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "Destructor for Cat." << std::endl;
}


const std::string	Cat::getType( void ) const {
	return this->_type;
}

void		Cat::makeSound( void ) const {
	std::cout << "MEOW MEOW." << std::endl;
}