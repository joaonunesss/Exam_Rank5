#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}

SpellBook::SpellBook(SpellBook const &other) {
    *this = other;
}
SpellBook& SpellBook::operator=(SpellBook const &other) {
    (void) other;
    return *this;
}

void SpellBook::learnSpell(ASpell *spell) {
    if (!spell)
        return;
    if (_spells.find(spell->getName()) != _spells.end())
        return;
    _spells[spell->getName()] = spell;
}
void SpellBook::forgetSpell(std::string const &spell) {
    std::map<std::string, ASpell*>::iterator it = _spells.find(spell);
    if (it != _spells.end())
        _spells.erase(it);
}

ASpell* SpellBook::createSpell(std::string const &spell) {
    std::map<std::string, ASpell*>::iterator it = _spells.find(spell);
    if (it != _spells.end())
        return it->second->clone();
    return NULL;
}
