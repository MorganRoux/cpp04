/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigWeapon.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:58:03 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 11:57:27 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGWEAPON_HPP
# define BIGWEAPON_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class BigWeapon : public AWeapon
{
	public:
		BigWeapon();
		virtual ~BigWeapon();
		BigWeapon(BigWeapon const&);
		BigWeapon&	operator=(BigWeapon const&);
		void			attack() const;

	protected:
};

#endif
