#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>
class SpellBook
{
    private:
        std::map<std::string , ASpell*> Book;
        SpellBook(const SpellBook &ref);
        const SpellBook &operator=(const SpellBook &ref);
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);
};