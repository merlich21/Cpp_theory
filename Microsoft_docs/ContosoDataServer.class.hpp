/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContosoDataServer.class.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:46:46 by merlich           #+#    #+#             */
/*   Updated: 2022/06/14 19:50:20 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

namespace ContosoDataServer
{
    void Foo();

    namespace Details
    {
        int CountImpl;
        void Ban() { return Foo(); }
    }

    void Bar(){};
    int Baz(int i) { return Details::CountImpl; }
}
