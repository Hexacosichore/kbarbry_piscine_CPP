#pragma once

#include <iostream>

class Form
{
	private:
		std::string	_name;
		bool		_isSigned;
		const int	_gradeSign;
		const int	_gradeExecute;
	
	public:
		Form( void );
		Form( const std::string& name, int gradeSign, int gradeExecute );
		Form( const Form &copyClass );
		Form	&operator=( const Form &equalClass );
		~Form( void );

		const std::string&	getName( void ) const;
		const bool			getSigned( void ) const;
		const int			getGradeSign( void ) const;
		const int			getGradeExecute( void ) const;

		//Exceptions
		class GradeTooHighException: std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("\033[0;31mGrade too high\033[0m, max grade is \033[0;34m1\033[0m.");
				}
		};
		class GradeTooLowException: std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("\033[0;31mGrade too low\033[0m, min grade is \033[0;34m150\033[0m.");
				}
		};
};

std::ostream	&operator<<(std::ostream &ost, const Form &elem ) {
	ost << "\033[0;31m" << elem.getName() << "\033[0m, signed : " << elem.getSigned() << ", grade for sign: " << elem.getGradeSign() << ", grade for execute : " << elem.getGradeExecute() << std::endl;
	return ost;
}