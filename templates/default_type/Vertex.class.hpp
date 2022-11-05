/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:40:47 by merlich           #+#    #+#             */
/*   Updated: 2022/11/05 23:33:04 by merlich          ###   ########.fr       */
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

		Vertex<T>( T const & x , T const & y, T const & z ) : _x(x), _y(y), _z(z) {}
		~Vertex<T>( void ) {}

		T const	getX( void ) const { return this->_x; }
		T const	getY( void ) const { return this->_y; }
		T const	getZ( void ) const { return this->_z; }

	private:

		T const	_x;
		T const	_y;
		T const	_z;

		Vertex<T>( void ) {}

};

template< typename T >
std::ostream &	operator<<( std::ostream & o, Vertex<T> const & v)
{
	std::cout.precision( 1 );
	o << std::setiosflags( std::ios::fixed );
	o << "Vertex ( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";
	return o;
}

#endif
