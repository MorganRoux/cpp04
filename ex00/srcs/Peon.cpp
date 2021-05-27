#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog !" << std::endl;
}

Peon::Peon(): Victim()
{
    std::cout << "Zog zog !" << std::endl;
}

void        Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
    std::cout << "Beuark !" << std::endl;
}
