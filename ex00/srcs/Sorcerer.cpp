/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:03:13 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 12:46:21 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):
    _name(name), _title(title)
{
    std::cout << _name << ", " << _title << " is born !" << std::endl;
}

Sorcerer::Sorcerer():
    _name("NO NAME"), _title("NO TITLE")
{
    std::cout << _name << ", " << _title << " is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}


Sorcerer::Sorcerer(Sorcerer const& sc)
{
    operator=(sc);
}

Sorcerer&   		Sorcerer::operator=(Sorcerer const& sc)
{
    _name = sc._name;
    _title = sc._title;
    return (*this);
}

std::string const&	Sorcerer::getName() const
{
	return (_name);
}

std::string const&	Sorcerer::getTitle() const
{
	return (_title);
}

void        		Sorcerer::polymorph(Victim const& v) const
{
    v.getPolymorphed();
}

std::ostream& 		operator<<(std::ostream& stream, Sorcerer const& sc)
{
	stream << "I'm " << sc.getName() << ", " << sc.getTitle() << " and I like ponies!" << std::endl;
	return (stream);
}


