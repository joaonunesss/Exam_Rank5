#include "Warlock.hpp"

Warlock::~Warlock() {
    std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title) {
    _name = name;
    _title = title;
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

std::string Warlock::getName() const {
    return _name;
}
std::string Warlock::getTitle() const {
    return _title;
}

void Warlock::setTitle(const std::string &title) {
    _title = title;
}

Warlock::Warlock(){}

Warlock::Warlock(Warlock const &other){
    *this = other;
}

Warlock& Warlock::operator=(Warlock const &other){
    _name = other._name;
    _title = other._title;

    return *this;
}

void Warlock::introduce() const {
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    if (!spell)
        return ;
    _spells.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell) {
    _spells.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget &target) {

    ASpell *sp;

    sp = _spells.createSpell(spell);
    if (sp)
        sp->launch(target);
}
