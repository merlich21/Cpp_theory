/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:40:47 by merlich           #+#    #+#             */
/*   Updated: 2022/11/04 23:05:20 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERTEX_CLASS_HPP
# define VERTEX_CLASS_HPP

#include <iostream>
#include <iomanip>

template< typename T = float >
class	Vertex
{

	public:

		Vertex<T>( T const & x , T const & y, T const & z );
		~Vertex<T>( void );

		T const	getX( void ) const;
		T const	getY( void ) const;
		T const	getZ( void ) const;

	private:

		T const	_x;
		T const	_y;
		T const	_z;

		Vertex<T>( void );

};

template< typename T >
std::ostream &	operator<<( std::ostream & o, Vertex<T> const & v);

#endif
