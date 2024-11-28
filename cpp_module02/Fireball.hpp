#ifndef Fireball_hpp
#define Fireball_hpp

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell {
    public:
        Fireball();
        ~Fireball();
        ASpell *clone() const;
};

#endif