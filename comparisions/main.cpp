/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:35 by merlich           #+#    #+#             */
/*   Updated: 2022/06/14 22:44:54 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp" 

int main(void)
{
    Sample  s1(42);
    Sample  s2(42);

    if (&s1 == &s1)
        std::cout << "s1 and s1 are phisically equals" << std::endl;
    else
        std::cout << "s1 and s1 are not phisically equals" << std::endl;
    if (&s1 == &s2)
        std::cout << "s1 and s2 are phisically equals" << std::endl;
    else
        std::cout << "s1 and s2 are not phisically equals" << std::endl;

    if (!s1.compare(&s1))
        std::cout << "s1 and s1 are structurally equals" << std::endl;
    else
        std::cout << "s1 and s1 are not structurally equals" << std::endl;
    if (!s1.compare(&s2))
        std::cout << "s1 and s2 are structurally equals" << std::endl;
    else
        std::cout << "s1 and s2 are not structurally equals" << std::endl;
    return 0;
}
