#pragma once
#include "ASpell.hpp"
#include <iostream>
class ASpell;
class ATarget
{
    private:
        std::string type;
    public:
        ATarget();
        ATarget(const std::string &type);
        virtual ~ATarget();
        ATarget(const ATarget &ref);
        const ATarget & operator=(const ATarget &ref);
        const std::string &getType()const;
        virtual ATarget *clone() = 0;
        void getHitBySpell(const ASpell &ref)const;
};