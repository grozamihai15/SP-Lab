#pragma once
#include <iostream>
#include <string>
#include <list>

using namespace std;

class SubChapter
{
public:
	SubChapter(string nume);
	void create_NewParagraph(string nume);
	void create_NewImage(string nume);
	void create_NewTable(string nume);
	void print();
private:
	list <string> listOfElements;
	string subchapterName;
};