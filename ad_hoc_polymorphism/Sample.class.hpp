/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:25:45 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 20:26:11 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
	public:

		Sample( void );
		~Sample( void );

		void	bar( int const a ) const;
		void	bar( double const b ) const;
		void	bar( char const c ) const;
		void	bar( Sample const & sample ) const;

	private:
		
};

#endif
