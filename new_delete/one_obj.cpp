/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_obj.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:15:00 by merlich           #+#    #+#             */
/*   Updated: 2022/06/24 20:18:23 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	private:

		std::string	_login;

};

int	main(void)
{
	Student		bob = Student("bfubar");
	Student		*jim = new Student("jfubar");

	//Some code here

	delete jim;
	return 0;
}