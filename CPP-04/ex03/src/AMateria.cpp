#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ): _type(type) {
	std::cout << "Default constructor for AMateria." << std::endl;
}

AMateria::AMateria( const AMateria &copyClass ) {
	std::cout << "Copy constructor for AMateria." << std::endl;
	*this = copyClass;
}

AMateria	&AMateria::operator=( const AMateria &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

AMateria::~AMateria( void ) {
	std::cout << "Destructor for AMateria." << std::endl;
}


std::string const	&AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {

}