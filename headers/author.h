#pragma once
#include <string>

class Author
{
public:
    Author(std::string name);
    void print();
private:
    std::string aname;
};