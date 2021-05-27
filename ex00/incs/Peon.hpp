#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string name);
        ~Peon();
        Peon(Peon const& peon);

        void getPolymorphed() const;
        
    private:
        Peon();
};

#endif