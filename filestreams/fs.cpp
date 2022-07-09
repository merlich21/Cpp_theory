/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:58:33 by merlich           #+#    #+#             */
/*   Updated: 2022/06/24 21:03:43 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;

	ifs >> dst >> dst2;
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//--------------------------------------------

	std::ofstream	ofs("test.out");
	
	ofs << "Hello there!" << std::endl;
	ofs.close();
	return (0);
}
