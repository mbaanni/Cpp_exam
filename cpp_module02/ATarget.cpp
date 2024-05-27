#include "ATarget.hpp"

ATarget::ATarget()
{

}
ATarget::ATarget(const std::string &type):type(type)
{

}
ATarget::~ATarget()
{

}

ATarget::ATarget(const ATarget &ref)
{
    *this = ref;
}

const ATarget & ATarget::operator=(const ATarget &ref)
{
    type = ref.type;
    return *this;
}
const std::string &ATarget::getType()const
{
    return type;
}

void ATarget::getHitBySpell(const ASpell &ref)const
{
    std::cout << type << " has been " << ref.getEffects() << '!' << std::endl;
}
