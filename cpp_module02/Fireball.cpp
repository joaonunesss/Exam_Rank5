#include "Fireball.hpp"

Fireball::Fireball() {
    _name = "Fireball";
    _effects = "burnt to a crisp";
}

Fireball::~Fireball() {}

ASpell *Fireball::clone() const {
    return new Fireball();
}