/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarbry <kbarbry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:36:59 by kbarbry           #+#    #+#             */
/*   Updated: 2022/03/11 18:40:28 by kbarbry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Form( std::string name, int gradeSign, int gradeExecute );
};