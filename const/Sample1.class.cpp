/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:28 by merlich           #+#    #+#             */
/*   Updated: 2022/06/13 23:18:13 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(float const param) : pi(param), a(42){
    std::cout << "Constructor called" << std::endl;
    return ;
}

Sample1::~Sample1(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Sample1::bar(void) const{
    std::cout << "this->a = " << this->a << std::endl;
    std::cout << "this->pi = " << this->pi << std::endl;
    return ;
}
