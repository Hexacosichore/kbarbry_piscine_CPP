#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal( void );
		AAnimal( const AAnimal &copyClass);
		AAnimal &operator=( const AAnimal &equalClass );
		virtual			~AAnimal( void );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const = 0;
};

#endif