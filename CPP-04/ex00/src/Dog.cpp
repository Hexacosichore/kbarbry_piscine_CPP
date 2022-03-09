#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default constructor for Dog." << std::endl;
	_type = "Dog";
}

Dog::Dog( const Dog &copyClass ) {
	std::cout << "Copy constructor for Dog." << std::endl;
	*this = copyClass;
}

Dog	&Dog::operator=( const Dog &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "Destructor for Dog." << std::endl;
}


const std::string	Dog::getType( void ) const {
	return this->_type;
}

void		Dog::makeSound( void ) const {
	std::cout << "WUF WUF." << std::endl;
}