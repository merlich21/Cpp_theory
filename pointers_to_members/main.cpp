/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:34:35 by merlich           #+#    #+#             */
/*   Updated: 2022/06/15 20:30:21 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp" 
#include <iostream>

int main(void)
{
	Sample  s;
	Sample  *sp = &s;

	int		Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::c;
	std::cout << "s.c = " << s.c << std::endl;
	s.*p = 42;
	std::cout << "s.c = " << s.c << std::endl;
	sp->*p = 21;
	std::cout << "s.c = " << sp->c << std::endl;

	f = &Sample::bar;
	(s.*f)();
	(sp->*f)();
	return 0;
}
