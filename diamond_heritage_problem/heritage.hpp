/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:19:44 by merlich           #+#    #+#             */
/*   Updated: 2022/07/31 19:09:55 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERITAGE_HPP
# define HERITAGE_HPP

#include <iostream>

class Person
{
    public:
        Person( void );
        Person( int );
        ~Person( void );
};

class Faculty : virtual public Person
{
    public:
        Faculty( void );
        Faculty( int );
        ~Faculty( void );
};

class Student : virtual public Person
{
    public:
        Student( void );
        Student( int );
        ~Student( void );
};

class TA : public Faculty, public Student
{
    public:
        TA( void );
        TA( int );
        ~TA( void );
};

#endif
