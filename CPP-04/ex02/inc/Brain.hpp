#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain( void );
		Brain( const Brain &copyClass);
		Brain &operator=( const Brain &equalClass );
		virtual			~Brain( void );
};

#endif