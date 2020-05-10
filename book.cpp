#include "book.h"

Book::Book(unsigned id, unsigned count, string name, 
           string author, unsigned short year, 
           string publisher, unsigned short publication_year)
    :Product(id, count)
    , _name(name)
    , _author(author)
    , _publisher(publisher)
    , _year(year)
    , _publication_year(publication_year)
{}

string Book::type() { return "Book"; }

string Book::info()
{
    stringstream ss;
    ss << "Name: "                << _name                << endl
       << "Author: "               << _author               << endl
       << "Year: "                  << _year                   << endl
       << "Publisher: "           << _publisher            << endl
       << "Publication year: " << _publication_year  << endl
       << "ID: "                     << id()                      << endl
       << "Quantity: "            << count()                 << endl
                                                                           << endl;
    return ss.str();
}
