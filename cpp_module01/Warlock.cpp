#include "Warlock.hpp"
#include "ASpell.hpp"

Warlock::Warlock()
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    for(std::map<std::string,  ASpell*>::iterator it = Book.begin(); it != Book.end(); it++)
        delete(it->second);
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title):name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &ref)
{
    *this = ref;
}

const Warlock &Warlock::operator=(const Warlock &ref)
{
    this->name = ref.getName();
    this->title = ref.getTitle();
    return *this;   
}

const std::string &Warlock::getName()const
{
    return name;
}

const std::string &Warlock::getTitle()const
{
    return title;
}

void Warlock::setTitle(const std::string &ref)
{
    title = ref;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " <<  name << ", "<< title << '!' << std::endl;
}

void Warlock::learnSpell( ASpell *ptr)
{
    if (!ptr)
        return;
    if (Book.find(ptr->getName()) == Book.end())
        Book[ptr->getName()] = ptr;
}

void Warlock::forgetSpell( std::string spell_name)
{
    if (Book.find(spell_name) != Book.end())
        Book.erase(spell_name);
}

void Warlock::launchSpell( std::string spell_name, const ATarget&ref)
{
    if (Book.find(spell_name) != Book.end())
        ref.getHitBySpell(*Book[spell_name]);
}