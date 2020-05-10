#ifndef BOOKSTORE_H
#define BOOKSTORE_H

class Product;
class Book;
class Pen;
#include "Product.h"
#include "book.h"
#include "pen.h"
#include <iostream>
#include <vector>

using namespace std;
class BookStore
{
public:
    BookStore();

    void dump();

    virtual ~BookStore();

private:
    vector <Product *> _products;
};

#endif // BOOKSTORE_H
