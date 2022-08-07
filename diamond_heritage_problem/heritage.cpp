/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:19:44 by merlich           #+#    #+#             */
/*   Updated: 2022/07/31 19:09:17 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heritage.hpp"

Person::Person( void )
{
    std::cout << "Person` s default constructor called" << std::endl;
}

Person::Person( int )
{
    std::cout << "Person` s int constructor called" << std::endl;
}

Person::~Person( void )
{
    std::cout << "Person` s destructor called" << std::endl;
}

Faculty::Faculty( void )
{
    std::cout << "Faculty` s default constructor called" << std::endl;
}

Faculty::Faculty( int )
{
    std::cout << "Faculty` s int constructor called" << std::endl;
}

Faculty::~Faculty( void )
{
    std::cout << "Faculty` s destructor called" << std::endl;
}

Student::Student( void )
{
    std::cout << "Student` s default constructor called" << std::endl;
}

Student::Student( int )
{
    std::cout << "Student` s int constructor called" << std::endl;
}

Student::~Student( void )
{
    std::cout << "Student` s destructor called" << std::endl;
}

TA::TA( void )
{
    std::cout << "TA` s default constructor called" << std::endl;
}

TA::TA( int )
{
    std::cout << "TA` s int constructor called" << std::endl;
}

TA::~TA( void )
{
    std::cout << "TA` s destructor called" << std::endl;
}
