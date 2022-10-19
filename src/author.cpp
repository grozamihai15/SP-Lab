#include "author.h"

Author(string name)
{
    this->aname = name;
}
string aname;
void print()
{
    cout << this->aname;
}