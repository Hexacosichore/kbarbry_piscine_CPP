/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarbry <kbarbry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:53:18 by kbarbry           #+#    #+#             */
/*   Updated: 2022/03/11 17:53:10 by kbarbry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {
	Bureaucrat	Jimin("Jimin", 150);
	Bureaucrat	Taehyung("Taehyung", 100);
	Bureaucrat	Hobie("Hobie", 50);
	Bureaucrat	Yoongi("Yoongi", 1);
	try {
		Bureaucrat	JK("JK", 0);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat	Jin("Jin", -50);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat	RM("RM", 200);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << Jimin;
	std::cout << Taehyung;
	std::cout << Hobie;
	std::cout << Yoongi;
	std::cout << std::endl;

	try {
		Jimin.decrementGrade();
		std::cout << Jimin;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Taehyung.decrementGrade();
		std::cout << Taehyung;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Yoongi.decrementGrade();
		std::cout << Yoongi;
		Yoongi.incrementGrade();
		std::cout << Yoongi;
		Yoongi.incrementGrade();
		std::cout << Yoongi;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}