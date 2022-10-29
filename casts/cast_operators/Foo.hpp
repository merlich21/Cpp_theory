/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Foo.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:21:17 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 21:43:46 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOO_HPP
# define FOO_HPP

#include <iostream>

class	Foo
{
	public:

		Foo( void );
		Foo( float const v );
		Foo( Foo const & obj );
		~Foo( void );
		Foo & operator=( Foo const &  rhs);

		operator float();
		operator int();

		void	setV( float v );
		float	getV( void );

	private:

		float	_v;
	
};

#endif
