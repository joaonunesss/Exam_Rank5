#ifndef TargetGenerator_hpp
#define TargetGenerator_hpp

#include <map>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator {
    public:
        TargetGenerator(); 
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &target);
        ATarget* createTarget(std::string const &target);

    private:
        std::map<std::string, ATarget*> _targets;

        TargetGenerator(TargetGenerator const &other);
        TargetGenerator&operator=(TargetGenerator const &other);
};

#endif
