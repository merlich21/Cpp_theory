/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:11:30 by merlich           #+#    #+#             */
/*   Updated: 2022/06/24 19:14:48 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int	numOfBalls = 42;
	int	*ballsPtr = &numOfBalls;
	int	&ballsRef = numOfBalls;

	std::cout << numOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numOfBalls << std::endl;

	ballsRef = 84;
	std::cout << numOfBalls << std::endl;

	return (0);
}
