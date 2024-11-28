#include "Polymorph.hpp"

Polymorph::Polymorph() {
    _name = "Polymorph";
    _effects = "turned into a critter";
}

Polymorph::~Polymorph() {}

ASpell *Polymorph::clone() const {
    return new Polymorph();
}