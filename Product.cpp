#include "Product.h"

Product::Product(unsigned id, unsigned count)
    : _id(id)
    , _count(count)
{}

unsigned Product::id() { return _id; }

unsigned Product::count() { return _count; }

void Product::set_count(unsigned count) { _count = count; }
