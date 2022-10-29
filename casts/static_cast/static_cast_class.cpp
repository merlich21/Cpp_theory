/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_cast_class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:35:31 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 20:42:43 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Parent					{};
class	Child1: public Parent	{};
class	Child2: public Parent	{};


class	Unrelated				{};


//----------------------------------------- //

int	main( void )
{
	Child1	a;  // Reference value

	Parent	*b = &a;  // Implicit upcast => OK!
	Child1	*c = b;  // Implicit downcast => Hell NO!
	Child2	*d = static_cast<Child2 *>(b);  // Explicit demotion => OK, I obey (BUT NOT OK)

	Unrelated	*e = static_cast<Unrelated *>(b);  // Explicit convertion => NO!

	return 0;
}

//----------------------------------------- //
