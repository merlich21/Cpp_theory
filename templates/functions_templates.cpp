/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:12:47 by merlich           #+#    #+#             */
/*   Updated: 2022/11/04 22:25:27 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
T const	&max( T const & x, T const & y )
{
	return ( (x>=y) ? x : y );
}

int	foo( int x )
{
	std::cout << "Long computing time" << std::endl;
	return x;
}

int	main( void )
{
	int	a = 21;
	int	b = 42;

	std::cout << "Max of " << a << " and " << b << " is " << max( a, b ) << std::endl;  // Implicit instanciation
	std::cout << "Max of " << a << " and " << b << " is " << max<int>( a, b ) << std::endl;  // Explicit instanciation

	float	c = -1.7f;
	float	d = 4.2f;

	std::cout << "Max of " << c << " and " << d << " is " << max( c, d ) << std::endl;  // Implicit instanciation
	std::cout << "Max of " << c << " and " << d << " is " << max<float>( c, d ) << std::endl;  // Explicit instanciation

	char	e = 'a';
	char	f = 'z';

	std::cout << "Max of " << e << " and " << f << " is " << max( e, f ) << std::endl;  // Implicit instanciation
	std::cout << "Max of " << e << " and " << f << " is " << max<char>( e, f ) << std::endl;  // Explicit instanciation


	/* No problem: */
	std::cout << "Max of " << a << " and " << b << " is " << max( foo(a), foo(b) ) << std::endl;  // Implicit instanciation
	std::cout << "Max of " << a << " and " << b << " is " << max<int>( foo(a), foo(b) ) << std::endl;  // Explicit instanciation
	

	return (0);
}

