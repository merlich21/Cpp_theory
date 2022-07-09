/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:46:56 by merlich           #+#    #+#             */
/*   Updated: 2022/06/24 20:13:46 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Student
{
	public:

		Student(std::string login) : _login(login)
		{
			std::cout << "Student " << this->_login << " is borned" << std::endl;
		}

		~Student(void)
		{
			std::cout << "Student " << this->_login << " is dead" << std::endl;
		}

		std::string			&getLoginRef(void)
		{
			return this->_login;
		}

		std::string const	&getLoginRefConst(void) const
		{
			return this->_login;
		}

		std::string			*getLoginPtr(void)
		{
			return &(this->_login);
		}

		std::string const 	*getLoginPtrConst(void) const
		{
			return &(this->_login);
		}

	private:

		std::string	_login;

};

int	main(void)
{
	Student			bob = Student("bfubar");
	Student const	jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	return (0);
}
