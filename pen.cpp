#include "pen.h"

Pen::Pen(unsigned id, unsigned count,
         string maker, string color)
    : Stationery(id, count, maker)
    , _color(color)
{}

string Pen::type() { return "Pen "; }

string Pen::info()
{
    stringstream ss;
    ss << "Type: "       << type()      << endl
        << "Color: "      << _color      << endl
        << "Maker: "     << maker()   << endl
        << "ID: "          << id()          << endl
        << "Quantity: " << count()    << endl
        << endl;
    return ss.str();
}
