/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:26:05 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 00:15:05 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
	public:
		Enemy(std::string const& type, int hp);
		virtual ~Enemy();
		Enemy(Enemy const&);
		Enemy&				operator=(Enemy const&);
		std::string const&	getType() const;
        int 				getHP() const;
        virtual void 		takeDamage(int);

	protected:
		Enemy();
		std::string			_type;
		int					_hp;
};

#endif

