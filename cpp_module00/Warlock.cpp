#include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::~Warlock() {
    std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title) {
    _name = name;
    _title = title;
    std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::Warlock(Warlock const &other) {
    *this = other;
}
Warlock& Warlock::operator=(Warlock const &other) {
    _name = other._name;
    _title = other._title;

    return *this;
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

void Warlock::introduce() const {
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}