#include "ATarget.hpp"

ATarget::ATarget(const std::string &type) {
    _type = type;
}
ATarget::~ATarget() {}

std::string ATarget::getType() const {
    return _type;
}

void ATarget::getHitBySpell(const ASpell &spell) {
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}


ATarget::ATarget() {}
ATarget::ATarget(ATarget const &other){
    *this = other;
}
ATarget& ATarget::operator=(ATarget const &other){
    (void) other;
    return *this;
}