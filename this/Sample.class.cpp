/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:28 by merlich           #+#    #+#             */
/*   Updated: 2022/06/13 22:16:55 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
    std::cout << "Constructor called" << std::endl;
    this->c = 42;
    std::cout << "this->c = " << this->c << std::endl;
    this->bar();
    return ;
}

Sample::~Sample(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Sample::bar(void){
    std::cout << "Member function bar called" << std::endl;
    return ;
}
