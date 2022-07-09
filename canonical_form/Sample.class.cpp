/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:25:47 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 23:47:51 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ) : _foo(0)
{
	std::cout << "Standart Constructor called" << std::endl;
}

Sample::Sample( int num ) : _foo(num)
{
	std::cout << "Custom Constructor called" << std::endl;
}

Sample::Sample( Sample const & src )
{
	std::cout << "Copying Constructor called" << std::endl;
	*this = src;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
}

int	Sample::getFoo( void ) const
{
	return this->_foo;
}

Sample & Sample::operator=( Sample const & rhs )
{
	this->_foo = rhs.getFoo();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Sample const & rhs)
{
	o << rhs.getFoo();
	return o;
}
