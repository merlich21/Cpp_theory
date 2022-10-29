/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:13:30 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 21:16:59 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main( void )
{
	int	a = 42;  // Reference value

	int const	*b = &a;  // Implicit promotion => OK
	int			*c = b;  // Implicit demotion => Hell NO!
	int			*d = const_cast<int *>(b); // Explicit demotion => Ok, I obey

	return 0;
}
