/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:47:47 by merlich           #+#    #+#             */
/*   Updated: 2022/11/04 23:56:58 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pair.class.hpp"

int	main( void )
{
	Pair< int, int >			p2( 12, 34 );
	Pair< std::string, float >	p1( std::string("School21"), 4.2f );
	Pair< float, bool >			p3( 3.14f, true );
	Pair< bool, bool >			p4( true, false );

	std::cout << p2 << std::endl;
	std::cout << p1 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;

	return 0;
}
