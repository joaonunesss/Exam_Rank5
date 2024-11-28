#ifndef Fwoosh_hpp
#define Fwoosh_hpp

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell {
    public:
        Fwoosh();
        ~Fwoosh();
        ASpell *clone() const;
};

#endif