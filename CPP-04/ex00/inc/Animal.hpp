#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal( void );
		Animal( const Animal &copyClass);
		Animal &operator=( const Animal &equalClass );
		virtual			~Animal( void );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif