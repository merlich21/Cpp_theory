/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:45:20 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 22:02:41 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	A {};
class	B {};
class	C
{
	public:
					C( A const & ) { return ; };
		explicit	C( B const & ) { return ; };
};

//------------------------------------//

void	f(C const &)
{
	return ;
}

int	main( void )
{
	f( A() );  // Implicit convertion => OK
	// f( B() );  // Implicit convertion => NOT OK, constructor is explicit 
	f( C(B()) );  // Explicit convertion => OK
	
	return 0;
}


// g++ -Wall -Wextra -Werror -Wno-unused -Wconversion main.cpp
