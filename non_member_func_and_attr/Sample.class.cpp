/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:28 by merlich           #+#    #+#             */
/*   Updated: 2022/06/15 19:08:01 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
    std::cout << "Constructor called" << std::endl;
    Sample::_nbInst += 1;
    return ;
}

Sample::~Sample(void){
    std::cout << "Destructor called" << std::endl;
    Sample::_nbInst -= 1;    
    return ;
}

int     Sample::getNbInst(void){
    return Sample::_nbInst;
}

int Sample::_nbInst = 0;
