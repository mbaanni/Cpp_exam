#include "Fwoosh.hpp"
#include "ASpell.hpp"

Fwoosh::Fwoosh():ASpell("Fwoosh", "fwooshed")
{

}
Fwoosh::~Fwoosh()
{

}
ASpell *Fwoosh::clone()const
{
    return new(Fwoosh);
}