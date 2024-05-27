#pragma once
#include "ATarget.hpp"
#include <iostream>

class ATarget;
class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        virtual ~ASpell();
        ASpell(const ASpell &ref);
        ASpell(std::string const &name, std::string const &effects);
        const ASpell & operator=(const ASpell &ref);
        const std::string &getName()const;
        const std::string &getEffects()const;
        virtual ASpell *clone() = 0;
        void launch(const ATarget &ref)const;
};