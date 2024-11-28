#ifndef Warlock_hpp
#define Warlock_hpp

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
    public:
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);

        std::string getName() const;
        std::string getTitle() const;

        void setTitle(const std::string &title) ;

        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spell);
        
        void launchSpell(std::string spell, ATarget &target);

    private:
        std::string _name;
        std::string _title;

        std::map<std::string, ASpell*> _spells;

        Warlock();
        Warlock(Warlock const &other);
        Warlock&operator=(Warlock const &other);
};

#endif