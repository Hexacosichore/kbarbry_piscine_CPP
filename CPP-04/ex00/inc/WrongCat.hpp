#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat &copyClass);
		WrongCat &operator=( const WrongCat &equalClass );
		~WrongCat( void );

		std::string		getType( void ) const;
		void			makeSound( void ) const;
};

#endif