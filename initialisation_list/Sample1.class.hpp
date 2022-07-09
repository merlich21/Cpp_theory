/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:33:45 by merlich           #+#    #+#             */
/*   Updated: 2022/06/13 22:32:51 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample1
{
    public:
    
        char    a1;
        int     a2;
        float   a3;

        Sample1(char p1, int p2, float p3);
        ~Sample1(void);
};

#endif
