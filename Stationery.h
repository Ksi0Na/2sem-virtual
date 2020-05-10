#ifndef STATIONERY_H
#define STATIONERY_H

//class Product;
#include "Product.h"
#include <string>

using namespace std;
class Stationery: public Product
{
public:
    Stationery(unsigned id, unsigned count,
               string maker);

    string maker();

    virtual string type();
    virtual string info();

private:
    string _maker;
};

#endif // STATIONERY_H
