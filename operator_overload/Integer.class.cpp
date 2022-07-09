/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:25:47 by merlich           #+#    #+#             */
/*   Updated: 2022/07/03 00:24:57 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

Integer::Integer( void ) : _n(0)
{
	std::cout << "Standart Constructor is called with " << _n << std::endl;
}

Integer::Integer( int num ) : _n(num)
{
	std::cout << "Custom Constructor is called with " << _n << std::endl;
}

Integer::~Integer( void )
{
	std::cout << "Destructor is called with " << _n << std::endl;
}

int	Integer::getValue( void ) const
{
	return this->_n;
}

Integer &	Integer::operator=( Integer const & rhs )
{
	std::cout << "Assignation operator is called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

Integer	Integer::operator+( Integer const & rhs ) const
{
	std::cout << "Summation operator is called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;
	return Integer(this->_n + rhs.getValue());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs)
{
	o << rhs.getValue();
	return o;
}
