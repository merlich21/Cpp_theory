/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:28 by merlich           #+#    #+#             */
/*   Updated: 2022/06/14 22:37:49 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int c) : _val(c){
    std::cout << "Constructor called" << std::endl;
    return ;
}

Sample::~Sample(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

int     Sample::getVal(void) const{
    return this->_val;
}

int     Sample::compare(Sample * s) const{
    if (this->_val < s->_val)
        return -1;
    if (this->_val > s->_val)
        return 1;
    return 0;
}
