/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_templates.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:26:17 by merlich           #+#    #+#             */
/*   Updated: 2022/11/04 22:37:31 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
class	List
{
	public:

		List<T>( T const & content ) {}
		List<T>( List<T> const & list ) {}
		~List<T>( void ) {}

	private:

		T		_content;
		List<T>	*_next;

};

int	main( void )
{
	List< int >				a(42);
	List< float >			b(3.14f);
	List< List< int > >		c(a);

	return 0;
}
