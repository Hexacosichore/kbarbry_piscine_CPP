/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarbry <kbarbry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:36:30 by kbarbry           #+#    #+#             */
/*   Updated: 2022/01/06 18:45:25 by kbarbry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		while (av[i][j])
			std::cout << (char)std::toupper(av[i][j++]);
		i++;
		if (i < ac)
			std::cout << " ";
		j = 0;
	}
	std::cout << std::endl;
	return (0);
}
