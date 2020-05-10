#ifndef PAPER_H
#define PAPER_H

//class Sationery;
#include "Stationery.h"
#include <sstream>

class Paper: public Stationery
{
public:
    Paper(unsigned id, unsigned count,
          string maker, string size, string Ro);

    virtual string type() ;
    virtual string info();

private:
    string _size, _Ro;
};

#endif // PAPER_H
