#ifndef LITERA_H
#define LITERA_H
#include <string>

class Litera {
    private:
        char a;
        char b;
    public:
        // ponizsze deklaracje prosze zdefiniowac w pliku litera.cpp
        Litera(char arg=(a,b));
        Litera(const Litera& arg);
        Litera(Litera&& arg);
        Litera& operator=(const Litera& arg);
        Litera& operator=(Litera&& arg);
        ~Litera();

        unsigned Litera_to_ascii() const;

        // prosze pamietac o deklaracji przyjazni wzgl. operatorow
       friend std::ostream operator<<(std::ostream& str, const Litera& arg);
       friend std::istream operator>>(std::istream& str, Litera& arg);
};

#endif