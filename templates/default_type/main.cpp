/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:40:25 by merlich           #+#    #+#             */
/*   Updated: 2022/11/04 23:20:06 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vertex.class.hpp"

int	main( void )
{
	Vertex<>	a(12, 23, 34);
	Vertex<int>	b(11, 22, 33);
	Vertex<int>	c(1.1f, 2.2f, 3.3f);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}
