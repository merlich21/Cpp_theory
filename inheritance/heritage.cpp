/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:19:44 by merlich           #+#    #+#             */
/*   Updated: 2022/07/31 18:46:29 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heritage.hpp"

A::A( void )
{
    std::cout << "A` s constructor called" << std::endl;
}

A::~A( void )
{
    std::cout << "A` s destructor called" << std::endl;
}

B::B( void )
{
    std::cout << "B` s constructor called" << std::endl;
}

B::~B( void )
{
    std::cout << "B` s destructor called" << std::endl;
}

C::C( void )
{
    std::cout << "C` s constructor called" << std::endl;
}

C::~C( void )
{
    std::cout << "C` s destructor called" << std::endl;
}
