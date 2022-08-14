/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:35:48 by merlich           #+#    #+#             */
/*   Updated: 2022/08/14 18:54:49 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	ACharacter
{
    private:

        std::string _name;
        
	public:

        virtual void    attack( std::string const & target ) = 0;
		virtual void	sayHello( std::string const & target );
};

class	Warrior : public ACharacter
{
	public:
        virtual void    attack( std::string const & target );
};

void	ACharacter::sayHello( std::string const & target )
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::attack( std::string const & target )
{
	std::cout << "Attacks " << target << " with his sword !" << std::endl;
}

// class   ICoffeeMaker
// {
//     public:
//         virtual void        fillWaterTank( IWaterSource * src ) = 0;  
//         virtual ICoffee*    makeCoffee( std::string const & type ) = 0;  
// };

int	main (void)
{
	// Warrior		*a = new Warrior();
	ACharacter	*b = new Warrior();

	// a->sayHello("students");
	b->sayHello("students");
    b->attack("student");
	return 0;
}
