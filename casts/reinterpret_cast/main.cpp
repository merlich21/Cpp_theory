/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:58:45 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 21:12:07 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	float	a = 420.042f;  // Reference value
	
	void	*b = &a;  // Implicit promotion => OK
	int		*c = reinterpret_cast<int *>(b);  // Explicit demotion => Ok, I obey
	int		&d = reinterpret_cast<int &>(b);  // Expicit demotion => Ok, I obey

	float	*e = reinterpret_cast<float *>(b);  // Explicit demotion => Ok, I obey

	std::cout << "Value = " << a << " Address = " << &a << std::endl;

	// std::cout << "Address = " << b << std::endl;
	// std::cout << "Value = " << *c << " Address = " << c << std::endl;
	// std::cout << "Value = " << d << " Address = " << &d << std::endl;

	std::cout << "Value = " << *e << " Address = " << e << std::endl;

	return 0;
}


// g++ -Wall -Wextra -Werror -Wno-unused -Wconversion main.cpp
