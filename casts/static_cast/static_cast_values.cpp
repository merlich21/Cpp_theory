/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_cast_values.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:26:58 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 20:34:27 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int	a = 42;  // Reference value
	
	double	b = a;  // Implicit promation => OK
	// int		c = b;  // Implicit demotion => Hell NO!
	int		d = static_cast<int>(b);  // Explicit demotion => OK, I obey

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	// std::cout << c << std::endl;
	std::cout << d << std::endl;
	
	return 0;
}

// g++ -Wall -Wextra -Werror -Wno-unused -Wconversion static_cast_values.cpp
