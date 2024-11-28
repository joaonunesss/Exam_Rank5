#ifndef SpellBook_hpp
#define SpellBook_hpp

#include <map>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class SpellBook {
    public:
        SpellBook(); 
        ~SpellBook();

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spell);

        ASpell* createSpell(std::string const &spell);

    private:
        std::map<std::string, ASpell*> _spells;

        SpellBook(SpellBook const &other);
        SpellBook&operator=(SpellBook const &other);
};

#endif