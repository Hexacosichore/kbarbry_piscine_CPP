#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria( std::string const &type );
		AMateria( const AMateria &copyClass );
		AMateria	&operator=(const AMateria &equalClass);
		~AMateria( void );

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif