/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:15:00 by merlich           #+#    #+#             */
/*   Updated: 2022/06/24 20:23:26 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student
{
	public:

		Student(void) : _login("login")
		{
			std::cout << "Student " << this->_login << " is borned" << std::endl;
		}

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
	Student		*students = new Student[42];

	//Some code here

	delete [] students;
	return 0;
}
