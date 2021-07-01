/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:02:17 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 13:45:30 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISpaceMarine *bob2 = new TacticalMarine;
	ISpaceMarine *jim2 = new AssaultTerminator;
	Squad vlc;
	Squad vlc2;
	ISquad *vlcI = new Squad;

	vlc.push(bob);
	vlc.push(jim);
	vlc2.push(bob2);
	vlc2.push(jim2);

	try {
		vlc.getUnit(10);
	} catch( std::exception e) {
		std::cout << e.what() << std::endl;
	}

	vlcI->push(bob);
	std::cout << vlc2.getCount() << std::endl;

	for (int i = 0; i < vlc.getCount(); ++i)
	{
		ISpaceMarine *cur = vlc.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "===" << std::endl;
	vlc = vlc2;
	for (int i = 0; i < vlc.getCount(); ++i)
	{
		ISpaceMarine *cur = vlc.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete bob;
	delete bob2;
	delete jim2;
	delete jim;
	delete vlcI;
	return 0;
}
