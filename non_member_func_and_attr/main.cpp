/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:35 by merlich           #+#    #+#             */
/*   Updated: 2022/06/15 19:13:36 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp" 

void    f0(void)
{
    Sample  s1;

    std::cout << "Sample::_nbInst = " << Sample::getNbInst() << std::endl;
}

void    f1(void)
{
    Sample  s2;
    
    std::cout << "Sample::_nbInst = " << Sample::getNbInst() << std::endl;
    f0();
    std::cout << "Sample::_nbInst = " << Sample::getNbInst() << std::endl;
}

int main(void)
{
    std::cout << "Sample::_nbInst = " << Sample::getNbInst() << std::endl;
    f1();
    std::cout << "Sample::_nbInst = " << Sample::getNbInst() << std::endl;
    return 0;
}
