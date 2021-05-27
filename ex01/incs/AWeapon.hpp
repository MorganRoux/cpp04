/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:25:35 by mroux             #+#    #+#             */
/*   Updated: 2021/05/27 23:18:08 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>
# include <iostream>

class AWeapon
{
	protected:
		AWeapon();
		std::string		_name;
		int				_damage;
		int				_APCost;

	public:
		AWeapon(std::string const &name, int damage, int apcost);
		AWeapon(AWeapon const&);
		AWeapon& 			operator=(AWeapon const&);
		virtual 			~AWeapon();
		std::string const& 	getName() const;
		int 				getDamage() const;
		int 				getAPCost() const;
		virtual void 		attack() const = 0;
};

#endif
