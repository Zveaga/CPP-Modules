/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/23 15:49:36 by coxer         #+#    #+#                 */
/*   Updated: 2024/09/23 15:49:53 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
        virtual ~Base() = 0;
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base    *generate(void);
void    identify(Base* p);
void    identify(Base& p);
