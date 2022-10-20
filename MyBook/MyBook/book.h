#pragma once
#include <iostream>
#include <list>
#include <string>
#include <iterator>

using namespace std; 

class Book
{
public:
	Book(string titlu);
	void add_Author(Author &autor);
	int create_Chapter(string nume_capitol);
	Chapter get_Chapter(int poz);
	void print();
private:
	string title;
	string autor_carte;
	list <Chapter> listOfChapters;
};
