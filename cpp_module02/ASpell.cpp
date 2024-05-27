#include "ASpell.hpp"

ASpell::ASpell()
{

}

ASpell::~ASpell()
{

}
ASpell::ASpell(std::string const &name, std::string const &effects):name(name),effects(effects)
{
}
const ASpell &ASpell::operator=(const ASpell &ref)
{
    name = ref.getName();
    effects = ref.getEffects();
    return *this;
}
ASpell::ASpell(const ASpell &ref)
{
    *this = ref;
}
const std::string &ASpell::getName()const
{
    return name;
}
const std::string &ASpell::getEffects()const
{
    return (effects);
}

void ASpell::launch(const ATarget &ref)const
{
    ref.getHitBySpell(*this);
}
