/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:01:22 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 12:46:05 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(Sorcerer const &sc);
	Sorcerer 			&operator=(Sorcerer const &sc);
	std::string const&	getName() const;
	std::string const&	getTitle() const;
	void 				polymorph(Victim const &) const;

protected:
	Sorcerer();
	std::string _name;
	std::string _title;
};

std::ostream &operator<<(std::ostream &stream, Sorcerer const &sc);

#endif
