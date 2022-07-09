/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:25:47 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 20:25:57 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void )
{
	std::cout << "Constructor is called" << std::endl;
}

Sample::~Sample( void )
{
	std::cout << "Destructor is called" << std::endl;
}

void	Sample::bar( int const a ) const
{
	std::cout << "int: " << a << std::endl;
}

void	Sample::bar( double const b ) const
{
	std::cout << "float: " << b << std::endl;
}

void	Sample::bar( char const c ) const
{
	std::cout << "char: " << c << std::endl;
}

void	Sample::bar( Sample const & sample ) const
{
	std::cout << "Case with the Sample class instance" << std::endl;
}
