/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarbry <kbarbry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:58:03 by kbarbry           #+#    #+#             */
/*   Updated: 2022/03/11 17:58:06 by kbarbry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;

	public:
		Bureaucrat( void );
		Bureaucrat( const std::string &name, int grade );
		Bureaucrat( const Bureaucrat &copyClass );
		Bureaucrat	&operator=( const Bureaucrat &equalClass );
		~Bureaucrat( void );

		const std::string	&getName( void ) const;
		int					getGrade( void ) const;

		void				incrementGrade( void );
		void				decrementGrade( void );

		//Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("\033[0;31mGrade too high\033[0m, max grade is \033[0;34m1\033[0m.");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("\033[0;31mGrade too low\033[0m, min grade is \033[0;34m150\033[0m.");
				}
		};
};

std::ostream	&operator<<( std::ostream &output, Bureaucrat const &obj );