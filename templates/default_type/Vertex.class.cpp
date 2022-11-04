/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:40:47 by merlich           #+#    #+#             */
/*   Updated: 2022/11/04 23:20:12 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vertex.class.hpp"

template< typename T >
Vertex<T>::Vertex( void ) {}

template< typename T >
Vertex<T>::Vertex( T const & x , T const & y, T const & z ) : _x(x), _y(y), _z(z) {}

template< typename T >
T const	Vertex<T>::getX( void ) const 
{
	return this->_x;
}

template< typename T >
T const	Vertex<T>::getY( void ) const 
{
	return this->_y;
}

template< typename T >
T const	Vertex<T>::getZ( void ) const 
{
	return this->_z;
}


template< typename T >
std::ostream &	operator<<( std::ostream & o, Vertex<T> const & v)
{
	std::cout.precision( 1 );
	o << setiosflags( std::ios::fixed );
	o << "Vertex ( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";
	return o;
}
