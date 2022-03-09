#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal") {
	std::cout << "Default constructor for WrongAnimal." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copyClass ) {
	std::cout << "Copy constructor for WrongAnimal." << std::endl;
	*this = copyClass;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Destructor for WrongAnimal." << std::endl;
}


std::string	WrongAnimal::getType( void ) const {
	return this->_type;
}

void		WrongAnimal::makeSound( void ) const {
	std::cout << "Undefined noises." << std::endl;
}