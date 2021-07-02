/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Other.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:56:45 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 11:56:46 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_HPP
# define OTHER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Other : public Victim
{
    public:
        Other(std::string name);
        virtual ~Other();
        Other(Other const& peon);

        void getPolymorphed() const;

    protected:
        Other();
};

#endif
