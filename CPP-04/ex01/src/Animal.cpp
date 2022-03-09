#include "Animal.hpp"

Animal::Animal( void ): _type("Undefined Animal") {
	std::cout << "Default constructor for Animal." << std::endl;
}

Animal::Animal( const Animal &copyClass ) {
	std::cout << "Copy constructor for Animal." << std::endl;
	*this = copyClass;
}

Animal	&Animal::operator=( const Animal &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "Destructor for Animal." << std::endl;
}


std::string	Animal::getType( void ) const {
	return this->_type;
}

void		Animal::makeSound( void ) const {
	std::cout << "Undefined noises." << std::endl;
}