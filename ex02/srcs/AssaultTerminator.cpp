/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:57:46 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 12:10:30 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& cl)
{
	operator=(cl);
}

AssaultTerminator&	AssaultTerminator::operator=(AssaultTerminator const& cl)
{
	(void)cl;
	return (*this);
}

void		AssaultTerminator::display(std::ostream& stream) const
{
	stream << "Hello" << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, AssaultTerminator const& cl)
{
	cl.display(stream);
	return (stream);
}

ISpaceMarine* 	AssaultTerminator::clone() const
{
	AssaultTerminator*		t = new AssaultTerminator(*this);
	return t;
}

void 			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void 			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void 			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
