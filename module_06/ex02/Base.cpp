/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: coxer <coxer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/23 16:06:20 by coxer         #+#    #+#                 */
/*   Updated: 2024/09/23 16:49:52 by coxer         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
    switch (std::rand() % 3)
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
        default:
            return (nullptr);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A class (*)\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B class (*)\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C class (*)\n";
    else
        std::cout << "Unknown class (*)\n";
}

void identify(Base& p)
{
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "A class (&)\n";
        return ;
    }
    catch (std::bad_cast& e) {}
    try
    {
        (void) dynamic_cast<B&>(p);
        std::cout << "B class (&)\n";
        return ;
    }
    catch (std::bad_cast& e) {}
    try
    {
        (void) dynamic_cast<C&>(p);
        std::cout << "C class (&)\n";
        return ;
    }
    catch (std::bad_cast& e) {}
        std::cout << "Unknown class (&)\n";
}
