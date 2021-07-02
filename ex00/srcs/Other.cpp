#include "Other.hpp"

Other::Other(std::string name): Victim(name)
{
    std::cout << "Mwouahaha !" << std::endl;
}

Other::Other(): Victim()
{
    std::cout << "Mwouahaha !" << std::endl;
}

void        Other::getPolymorphed() const
{
    std::cout << _name << " has been turned into a Mmouahaha pony!" << std::endl;
}

Other::~Other()
{
    std::cout << "Mwouihihi !" << std::endl;
}
