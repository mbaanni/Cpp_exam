#include "Warlock.hpp"

Warlock::Warlock()
{
    std::cout << name << ": This looks like another boring day."<<std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock &obg)
{
    (void)obg;
}

const Warlock &Warlock::operator=(const Warlock &obg)
{
    return obg;
}

Warlock::Warlock(const std::string &name, const std::string &title):name(name), title(title)
{
    std::cout << name << ": This looks like another boring day."<<std::endl;
}


void Warlock::setTitle(const std::string &ref)
{
    title = ref;
}
const std::string &Warlock::getName()const
{
    return name;
}
const std::string &Warlock::getTitle()const
{
    return title;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << '!' << std::endl;
}
