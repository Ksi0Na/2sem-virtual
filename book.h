#ifndef BOOK_H
#define BOOK_H

//class Product;
#include "Product.h"
#include <sstream>
#include <string>
using namespace std;

class Book : public Product
{
public:
    Book(unsigned id, unsigned count, string name, 
             string author, unsigned short year, 
             string publisher, unsigned short publication_year);

    virtual string type();
    virtual string info();

private:
    string _name, _author, _publisher;
    unsigned short _year, _publication_year;
};

#endif // BOOK_H
