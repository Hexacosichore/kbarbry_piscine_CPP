#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &copyClass);
		WrongAnimal &operator=( const WrongAnimal &equalClass );
		virtual			~WrongAnimal( void );

		std::string		getType( void ) const;
		void			makeSound( void ) const;
};

#endif