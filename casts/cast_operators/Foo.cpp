/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Foo.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:28:08 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 21:43:41 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Foo.hpp"

Foo::Foo( void ) : _v(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Foo::Foo( float const v ) : _v(v)
{
	std::cout << "Custom constructor called" << std::endl;
}

Foo::Foo( Foo const & obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Foo::~Foo( void )
{
    std::cout << "Destructor called" << std::endl;
}

Foo & Foo::operator=( Foo const &  rhs)
{
	this->_v = rhs._v;
	return *this;
}

Foo::operator float()
{
	return this->_v;
}

Foo::operator int()
{
	return static_cast<int>(this->_v);
}

void	Foo::setV( float v )
{
	this->_v = v;
}

float	Foo::getV( void )
{
	return this->_v;	
}
