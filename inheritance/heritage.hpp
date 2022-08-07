/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:19:44 by merlich           #+#    #+#             */
/*   Updated: 2022/07/31 18:49:13 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERITAGE_HPP
# define HERITAGE_HPP

#include <iostream>

class A
{
    public:
        A( void );
        ~A( void );
};

class B
{
    public:
        B( void );
        ~B( void );
};

class C : public A, public B
{
    public:
        C( void );
        ~C( void );
};

#endif
