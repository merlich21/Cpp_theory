/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 22:43:45 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 23:51:49 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance1;
	Sample	instance2( 42 );
	Sample	instance3( instance1 );

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;
	return 0;
}
