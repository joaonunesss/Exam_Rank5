#ifndef ASpell_hpp
#define ASpell_hpp

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    public:
        ASpell();
        ASpell(const std::string &name, const std::string &effects);
        virtual ~ASpell();

        std::string getName() const;
        std::string getEffects() const;

        virtual ASpell *clone() const = 0;

        void launch(ATarget &target) const;

    protected:
        std::string _name;
        std::string _effects;

        ASpell(ASpell const &other);
        ASpell&operator=(ASpell const &other);
};

#endif