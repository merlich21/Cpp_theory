/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:28 by merlich           #+#    #+#             */
/*   Updated: 2022/06/13 21:42:35 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
    std::cout << "Constructor called" << std::endl;
    return ;
}

Sample::~Sample(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}
