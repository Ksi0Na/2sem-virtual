#include "paper.h"

Paper::Paper(unsigned id, unsigned count,
             string maker, string size, string Ro)
    :Stationery(id, count, maker)
    , _size(size)
    , _Ro(Ro)
{}

string Paper::type() { return "Paper "; }

string Paper::info()
{
    stringstream ss;
    ss << "Size: "     << _size   << endl
       << "Density: "  << _Ro     << endl
       << "Maker: "    << maker() << endl
       << "ID: "       << id()    << endl
       << "Quantity: " << count() << endl
       << endl;
    return ss.str();
}
