/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:50:40 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 12:10:20 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const& cl)
{
	operator=(cl);
}

TacticalMarine&	TacticalMarine::operator=(TacticalMarine const& cl)
{
	(void)cl;
	return (*this);
}

void		TacticalMarine::display(std::ostream& stream) const
{
	stream << "Hello" << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, TacticalMarine const& cl)
{
	cl.display(stream);
	return (stream);
}

ISpaceMarine* 	TacticalMarine::clone() const
{
	TacticalMarine*		t = new TacticalMarine(*this);
	return t;
}

void 			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void 			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
