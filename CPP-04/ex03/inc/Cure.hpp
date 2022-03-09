#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	protected:
		std::string	_type;

	public:
		Cure( void );
		Cure( const Cure &copyClass );
		Cure	&operator=(const Cure &equalClass);
		~Cure( void );

		std::string	const	&getType( void ) const;
		virtual Cure		*clone( void ) const;
		virtual void 		use( ICharacter &target );
};

#endif