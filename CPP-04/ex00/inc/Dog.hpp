#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog( void );
		Dog( const Dog &copyClass);
		Dog &operator=( const Dog &equalClass );
		~Dog( void );

		const std::string	getType( void ) const;
		virtual void		makeSound( void ) const;
};

#endif