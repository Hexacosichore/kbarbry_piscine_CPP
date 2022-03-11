/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarbry <kbarbry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:57:31 by kbarbry           #+#    #+#             */
/*   Updated: 2022/03/11 17:57:40 by kbarbry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("Nobody"), _grade(150) {
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copyClass ) {
	*this = copyClass;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &equalClass ) {
	this->_name = equalClass._name;
	this->_grade = equalClass._grade;
	return *this;
}

Bureaucrat::~Bureaucrat( void ) {
}


const std::string	&Bureaucrat::getName( void ) const {
	return _name;
}

int					Bureaucrat::getGrade( void ) const {
	return _grade;
}


void	Bureaucrat::incrementGrade( void ) {
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade( void ) {
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &obj) {
	output << "\033[0;32m" << obj.getName() << "\033[0m, bureaucrat grade \033[0;34m" << obj.getGrade() << "\033[0m." << std::endl;
	return output;
}