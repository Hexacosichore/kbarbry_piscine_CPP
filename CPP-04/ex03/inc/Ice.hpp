#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	protected:
		std::string	_type;

	public:
		Ice( void );
		Ice( const Ice &copyClass );
		Ice	&operator=(const Ice &equalClass);
		~Ice( void );

		std::string	const	&getType( void ) const;
		virtual Ice			*clone( void ) const;
		virtual void		use( ICharacter &target );
};

#endif