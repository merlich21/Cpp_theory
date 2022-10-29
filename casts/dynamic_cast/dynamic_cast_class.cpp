/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic_cast_class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:35:31 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 20:57:41 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Parent					{ public: virtual ~Parent( void ) {} };
class	Child1: public Parent	{};
class	Child2: public Parent	{};

//----------------------------------------- //

int	main( void )
{
	Child2	a;  // Reference value
	Parent	*b = &a;  // Implicit upcast => OK!

	// Explicit downcast => Suspens...
	Child1	*c = dynamic_cast<Child1 *>(b);
	if ( c == NULL )
		std::cout << "Convertion is NOT OK" << std::endl;
	else
		std::cout << "Convertion is OK" << std::endl;

	// Explicit downcast => Suspens...
	try
	{
		Child2	&d = dynamic_cast<Child2 &>(*b);
		std::cout << "Convertion is OK" << std::endl;
	}
	catch( std::bad_cast &bc ) 
	{
		std::cout << "Convertion is NOT OK: " << std::endl;
		std::cerr << bc.what() << std::endl;
		return 0;
	}
	

	return 0;
}

// g++ -Wall -Wextra -Werror -Wno-unused -Wconversion dynamic_cast_class.cpp
//----------------------------------------- //
