#include "Character.hpp"

Character::Character( void ) {
	std::cout << "Default constructor for Character." << std::endl;
}

Character::Character( const Character &copyClass ) {
	std::cout << "Copy constructor for Character." << std::endl;
	*this = copyClass;
}

Character	&Character::operator=( const Character &equalClass) {
	if (this != &equalClass) {
		;
	}
	return *this;
}

Character::~Character( void ) {
	std::cout << "Destructor for Character." << std::endl;
}
