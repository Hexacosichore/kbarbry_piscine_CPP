#include "Form.hpp"

Form::Form( void ): _name("Nobody"), _gradeSign(150), _gradeExecute(150) {
}

Form::Form( const std::string& name, int gradeSign, int gradeExecute ): _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form &copyClass ) {
	*this = copyClass;
}

Form	&Form::operator=( const Form &equalClass ) {
	this->_name = equalClass._name;
	this->_isSigned = equalClass._isSigned;

	return *this;
}

Form::~Form( void ) {
}

const std::string&	Form::getName( void ) const {
	return _name;
}

const bool			Form::getSigned( void ) const {
	return _isSigned;
}

const int			Form::getGradeSign( void ) const {
	return _gradeSign;
}

const int			Form::getGradeExecute( void ) const {
	return _gradeExecute;
}
