/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explicit.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:21:46 by merlich           #+#    #+#             */
/*   Updated: 2022/11/27 19:35:03 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	A {};

class	B {};

class C
{

	public:

					C( A const & a ) { return; }
		explicit	C( B const & b ) { return; }

};


void	f( C const & c )
{
	return ;
}

int	main( void )
{
	f( A() );  // Implicit convertion. OK
	f( B() );  // Implicit convertion. NOT OK. Constructor is explicit!

	return 0;
}
