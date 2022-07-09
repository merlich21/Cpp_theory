/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:33:45 by merlich           #+#    #+#             */
/*   Updated: 2022/06/13 23:16:21 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample1
{
    public:

        float const    pi;
        int            a;

        Sample1(float const param);
        ~Sample1(void);

        void    bar(void) const;
};

#endif
