/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:01:22 by mroux             #+#    #+#             */
/*   Updated: 2021/05/27 16:29:35 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>


class Victim {
    public:
        Victim(std::string name);
        ~Victim();
        Victim(Victim const& victim);
        Victim&     operator=(Victim const& victim);
        void		display(std::ostream& stream) const;

        virtual void getPolymorphed() const;

    protected:
        Victim();
        std::string     _name;
};

std::ostream& operator<<(std::ostream& stream, Victim const& victim);

#endif