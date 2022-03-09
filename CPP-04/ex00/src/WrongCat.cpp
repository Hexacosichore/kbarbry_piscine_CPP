#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "Default constructor for WrongCat." << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &copyClass ) {
	std::cout << "Copy constructor for WrongCat." << std::endl;
	*this = copyClass;
}

WrongCat	&WrongCat::operator=( const WrongCat &equalClass) {
	if (this != &equalClass) {
		this->_type = equalClass.getType();
	}
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Destructor for WrongCat." << std::endl;
}


std::string	WrongCat::getType( void ) const {
	return this->_type;
}

void		WrongCat::makeSound( void ) const {
	std::cout << "MEOW MEOW." << std::endl;
}