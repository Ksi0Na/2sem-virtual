#ifndef PEN_H
#define PEN_H

//class Stationery;
#include "Stationery.h"
#include <sstream>

class Pen: public Stationery
{
public:
    Pen(unsigned id, unsigned count,
        string maker, string color);

    virtual string type();
    virtual string info();

private:
    string _color;
};

#endif // PEN_H
