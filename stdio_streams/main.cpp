/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:00 by merlich           #+#    #+#             */
/*   Updated: 2022/06/13 21:34:03 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    char    buff[256];

    std::cout << "Hello World!" << std::endl;
    std::cout << "Input a word: ";
    std::cin >> buff;
    std::cout << "You entered: [" << buff << "]" << std::endl;
    return 0;
}
