#ifndef Warlock_hpp
#define Warlock_hpp

#include <iostream>

class Warlock {
    public:
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);

        std::string getName() const;
        std::string getTitle() const;

        void setTitle(const std::string &title) ;

        void introduce() const;

    private:
        std::string _name;
        std::string _title;

        Warlock();
        Warlock(Warlock const &other);
        Warlock&operator=(Warlock const &other);
};

#endif