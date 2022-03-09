#include "Cure.hpp"

Cure::Cure( void ): AMateria("Cure") {
	std::cout << "Default constructor for Cure." << std::endl;
}

Cure::Cure( const Cure &copyClass ): AMateria("Cure") {
	std::cout << "Copy constructor for Cure." << std::endl;
	*this = copyClass;
}

Cure	&Cure::operator=( const Cure &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

Cure::~Cure( void ) {
	std::cout << "Destructor for Cure." << std::endl;
}


std::string const	&Cure::getType( void ) const {
	return this->_type;
}

Cure	*Cure::clone( void ) const {
	return new Cure(*this);
}

void Cure::use( ICharacter& target ) {

}