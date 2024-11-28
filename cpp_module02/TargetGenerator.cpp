#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

TargetGenerator::TargetGenerator(TargetGenerator const &other) {
    *this = other;
}
TargetGenerator& TargetGenerator::operator=(TargetGenerator const &other) {
    (void) other;
    return *this;
}

void TargetGenerator::learnTargetType(ATarget *target) {
    if (!target)
        return;
    if (_targets.find(target->getType()) != _targets.end())
        return;
    _targets[target->getType()] = target;
}
void TargetGenerator::forgetTargetType(std::string const &target) {
    std::map<std::string, ATarget*>::iterator it = _targets.find(target);
    if (it != _targets.end())
        _targets.erase(it);
}

ATarget* TargetGenerator::createTarget(std::string const &target) {
     std::map<std::string, ATarget*>::iterator it = _targets.find(target);
    if (it != _targets.end())
        return it->second->clone();
    return NULL;
}
