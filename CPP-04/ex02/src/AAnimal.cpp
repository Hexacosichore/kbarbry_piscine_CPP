#include "AAnimal.hpp"

AAnimal::AAnimal( void ): _type("Undefined Animal") {
	std::cout << "Default constructor for AAnimal." << std::endl;
}

AAnimal::AAnimal( const AAnimal &copyClass ) {
	std::cout << "Copy constructor for Animal." << std::endl;
	*this = copyClass;
}

AAnimal	&AAnimal::operator=( const AAnimal &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Destructor for AAnimal." << std::endl;
}


std::string	AAnimal::getType( void ) const {
	return this->_type;
}

void		AAnimal::makeSound( void ) const {
	std::cout << "Undefined noises." << std::endl;
}