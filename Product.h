#ifndef PRODUCT_H
#define PRODUCT_H

//class BookStore;
#include"BookStore.h"
#include <string>

using namespace std;
class Product: public BookStore
{
public:
    Product (unsigned id, unsigned count);

    unsigned id();

    unsigned count();
    void set_count(unsigned count);

    virtual string type();
    virtual string info();

private:
    unsigned _id;
    unsigned _count;
};

#endif // PRODUCT_H
