#pragma once
#include "ASpell.hpp"
#include <iostream>
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        SpellBook Book;
        Warlock();
        Warlock(const Warlock &ref);
        const Warlock &operator=(const Warlock &ref);
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();
        const std::string &getName()const;
        const std::string &getTitle()const;
        void setTitle(const std::string &ref);
        void introduce() const;
        void learnSpell( ASpell *ptr);
        void forgetSpell( std::string spell_name);
        void launchSpell( std::string spell_name, const ATarget&ref);
};