/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:33:45 by merlich           #+#    #+#             */
/*   Updated: 2022/06/14 22:36:24 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample{

    public:
        Sample(int c);
        ~Sample(void);
        int    getVal(void) const;
        int    compare(Sample * s) const;
    private:
        int _val;
};

#endif
