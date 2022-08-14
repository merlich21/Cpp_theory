/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:14:36 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 23:21:38 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	Character
{
	public:
		void	sayHello( std::string const & target );
};

class	Warrior : public Character
{
	public:
		void	sayHello( std::string const & target );
};

void	Character::sayHello( std::string const & target )
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello( std::string const & target )
{
	std::cout << "F*** off " << target << ", I don`t like you !" << std::endl;
}

int	main (void)
{
	Warrior		*a = new Warrior();
	Character	*b = new Warrior();

	a->sayHello("students");
	b->sayHello("students");
	return 0;
}
