#ifndef NOTEBOOK_H
#define NOTEBOOK_H

//class Stationery;
#include "Stationery.h"
#include <sstream>

class Notebook: public Stationery
{
public:
    Notebook(unsigned id,  unsigned count,
             string maker, string type_notebook,
             unsigned count_sheets);

    virtual string type();
    virtual string info();

private:
    string   _type_notebook;
    unsigned _count_sheets;
};

#endif // NOTEBOOK_H
