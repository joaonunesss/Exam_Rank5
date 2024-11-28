#ifndef BrickWall_hpp
#define BrickWall_hpp

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget {
    public:
        BrickWall();
        ~BrickWall();
        ATarget *clone() const;
};

#endif