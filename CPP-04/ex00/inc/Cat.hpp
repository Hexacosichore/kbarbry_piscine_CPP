#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( const Cat &copyClass);
		Cat &operator=( const Cat &equalClass );
		~Cat( void );

		const std::string	getType( void ) const;
		virtual void		makeSound( void ) const;
};

#endif