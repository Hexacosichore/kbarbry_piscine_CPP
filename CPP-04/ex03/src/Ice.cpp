#include "Ice.hpp"

Ice::Ice( void ): AMateria("Ice") {
	std::cout << "Default constructor for Ice." << std::endl;
}

Ice::Ice( const Ice &copyClass ): AMateria("Ice") {
	std::cout << "Copy constructor for Ice." << std::endl;
	*this = copyClass;
}

Ice	&Ice::operator=( const Ice &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

Ice::~Ice( void ) {
	std::cout << "Destructor for Ice." << std::endl;
}


std::string const	&Ice::getType( void ) const {
	return this->_type;
}

Ice	*Ice::clone( void ) const {
	return new Ice(*this);
}

void Ice::use( ICharacter& target ) {

}