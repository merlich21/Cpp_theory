/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 00:15:51 by merlich           #+#    #+#             */
/*   Updated: 2022/07/03 00:21:16 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

int	main(void)
{
	Integer	x( 30 );
	Integer	y( 10 );
	Integer	z;

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;

	y = Integer( 12 );
	std::cout << y << std::endl;

	z = x + y;
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;

	return 0;
}