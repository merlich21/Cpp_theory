/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:25:45 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 23:46:13 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
	public:

		Sample( void );								// Canonical
		Sample( int num );
		Sample( Sample const & src ); 				// Canonical
		~Sample( void ); 							// Canonical

		Sample & operator=( Sample const & rhs );		// Canonical		

		int	getFoo( void ) const;

	private:
		
		int	_foo;
		
};

std::ostream &	operator<<( std::ostream & o, Sample const & i);

#endif
