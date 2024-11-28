#ifndef Dummy_hpp
#define Dummy_hpp

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget {
    public:
        Dummy();
        ~Dummy();
        ATarget *clone() const;
};

#endif