#include "Stationery.h"

Stationery::Stationery(unsigned id, unsigned count,
                       string maker)
    :Product(id, count)
    , _maker(maker)
{}

string Stationery::maker() { return _maker; }

string Stationery::type() { return "Stationery "; }
