
#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
    for(std::map<std::string, ASpell*>::iterator it = Book.begin(); it != Book.end(); it++)
        delete(it->second);
}

SpellBook::SpellBook(const SpellBook &ref)
{
    *this = ref;
}

const SpellBook &SpellBook::operator=(const SpellBook &ref)
{
    Book = ref.Book;
    return *this;
}

void SpellBook::learnSpell(ASpell*ptr)
{
    if (!ptr)
        return;
    if (Book.find(ptr->getName()) == Book.end())
        Book[ptr->getName()] = ptr->clone();
}

void SpellBook::forgetSpell(std::string const &spell)
{
    if (Book.find(spell) != Book.end())
    {
        delete(Book[spell]);
        Book.erase(spell);
    }
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
    if (Book.find(spell) != Book.end())
        return Book[spell]->clone();
    return 0;
}