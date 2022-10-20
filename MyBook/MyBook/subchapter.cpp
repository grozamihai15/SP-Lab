#include "subchapter.h"

SubChapter::SubChapter(string nume)
{
	this->subchapterName = nume;
}
void SubChapter::create_NewParagraph(string nume)
{
	listOfElements.push_back(nume);
}
void SubChapter::create_NewImage(string nume)
{
	listOfElements.push_back(nume);
}
void SubChapter::create_NewTable(string nume)
{
	listOfElements.push_back(nume);
}
void SubChapter::print()
{
	cout << "Numele subcapitolului: " << subchapterName << endl;
	cout << "Paragraful contine: " << endl;
	for (auto it = listOfElements.begin(); it != listOfElements.end(); ++it)
	{
		cout << *it << endl;
	}
}