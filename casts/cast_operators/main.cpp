/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:36:40 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 21:44:57 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Foo.hpp"

int	main( void )
{
	Foo		a(420.024f);
	float	b = a;
	int		c = a;

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}

// g++ -Wall -Wextra -Werror -Wno-unused -Wconversion main.cpp Foo.cpp
