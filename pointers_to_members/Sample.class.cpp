/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:28 by merlich           #+#    #+#             */
/*   Updated: 2022/06/15 20:12:16 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : c(0){
    std::cout << "Constructor called" << std::endl;
    return ;
}

Sample::~Sample(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Sample::bar(void) const{
    std::cout << "Member function bar called" << std::endl;
    return ;
}
