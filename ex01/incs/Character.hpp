/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:46:19 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 00:14:49 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const& name);
		~Character();
		Character(Character const&);
		Character&			operator=(Character const&);
		void				display(std::ostream& stream) const;

		void 				recoverAP();
        void 				equip(AWeapon*);
        void 				attack(Enemy*);
        std::string const&	getName() const;

	protected:
		Character();

		std::string			_name;
		int					_ap;
		AWeapon*			_weapon;
};

std::ostream&	operator<<(std::ostream& stream, Character const& cl);

#endif
