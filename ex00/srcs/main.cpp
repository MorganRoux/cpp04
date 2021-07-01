/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:06:10 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 12:33:59 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer    sc("Me", "King");
    Victim      v("Vic");
    Peon        p("Peon");

    std::cout << sc << v << p;
	std::cout << sc.getName() <<  " - " << sc.getTitle() << v.getName() << p.getName() << std::endl;
    sc.polymorph(v);
    sc.polymorph(p);

}
