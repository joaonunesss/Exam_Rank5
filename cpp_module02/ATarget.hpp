#ifndef ATarget_hpp
#define ATarget_hpp

#include <iostream>
#include "ASpell.hpp"


class ASpell;

class ATarget {
    public:
        ATarget(const std::string &type);
        virtual ~ATarget();

        std::string getType() const;

        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &spell);

    protected:
        std::string _type;

        ATarget();
        ATarget(ATarget const &other);
        ATarget&operator=(ATarget const &other);
};

#endif