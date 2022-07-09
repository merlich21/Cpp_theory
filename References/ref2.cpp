/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:20:19 by merlich           #+#    #+#             */
/*   Updated: 2022/06/24 19:27:22 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	byPtr(std::string *str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " and ponies";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int	main(void)
{
	std::string str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return 0;
}
