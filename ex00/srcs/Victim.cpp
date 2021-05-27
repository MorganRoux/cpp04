/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:03:13 by mroux             #+#    #+#             */
/*   Updated: 2021/05/27 16:27:22 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): 
    _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim():
    _name("NO NAME")
{
     std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}


Victim::Victim(Victim const& victim)
{
    operator=(victim);
}

Victim&   Victim::operator=(Victim const& victim)
{
    _name = victim._name;
    return (*this);
}

void		Victim::display(std::ostream& stream) const
{
	stream << "I'm " << _name << " and I like otters!" << std::endl;
}

void        Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& stream, Victim const& victim)
{
	victim.display(stream);
	return (stream);
}


