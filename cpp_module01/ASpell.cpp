#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const std::string &name, const std::string &effects) {
    _name = name;
    _effects = effects;
}

ASpell::~ASpell() {}

std::string  ASpell::getName() const {
    return _name;
}

std::string  ASpell::getEffects() const {
    return _effects;
}

void ASpell::launch(ATarget &target) const {
    target.getHitBySpell(*this);
}

ASpell::ASpell(ASpell const &other) {
    *this = other;
}

ASpell& ASpell::operator=(ASpell const &other) {
    (void) other;
    return *this;
}