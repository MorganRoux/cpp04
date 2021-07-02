/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:29:29 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 12:29:05 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "BigWeapon.hpp"
#include "BadVilain.hpp"

int main()
{
	Character *me = new Character("me");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	Enemy *c = new SuperMutant();
	Enemy *d = new BadVilain();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	AWeapon *bw = new BigWeapon();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	me->attack(c);
	std::cout << *me;
	me->equip(bw);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	me->attack(d);
	std::cout << *me;
	std::cout << "===" << std::endl;
	delete me;
	delete b;
	delete c;
	delete pr;
	delete pf;
	return 0;
}
