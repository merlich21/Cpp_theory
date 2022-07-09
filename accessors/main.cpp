/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:35 by merlich           #+#    #+#             */
/*   Updated: 2022/06/14 21:58:54 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp" 

int main(void)
{
    Sample  s;

    s.setVal(42);
    std::cout << "s->_val = " << s.getVal() << std::endl;
    s.setVal(-42);
    std::cout << "s->_val = " << s.getVal() << std::endl;

    return 0;
}
