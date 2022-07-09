/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:25:45 by merlich           #+#    #+#             */
/*   Updated: 2022/07/03 00:03:37 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

#include <iostream>

class Integer
{
	public:

		Integer( void );
		Integer( int num );
		~Integer( void );

		Integer & operator=( Integer const & rhs );
		Integer	operator+( Integer const & rhs ) const;

		int	getValue( void ) const;

	private:

		int	_n;
		
};

std::ostream &	operator<<(std::ostream & o, Integer const & rhs);

#endif
