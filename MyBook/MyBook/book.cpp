#include "book.h"
#include "chapter.h"
#include "author.h"

Book::Book(string titlu)
{
	this->title = titlu;
}
void Book::add_Author(Author &autor)
{
	this->autor_carte = autor.autorName;
}
int Book::create_Chapter(string nume_capitol)
{
	Chapter chapter(nume_capitol);
	listOfChapters.push_back(chapter);
	return listOfChapters.size();
}
Chapter Book::get_Chapter(int poz)
{
	auto it = listOfChapters.begin();
	advance(it, poz);
	return *it;
}
void Book::print()
{
	cout << "Titlul cartii este: " << title << endl;
	if (autor_carte != "")
		cout << "Autorul cartii este: " << autor_carte << endl;
	else
		cout << "Cartea nu are autor." << endl;
	cout << "Cartea are uramtoarele capitole:" << endl;
	for (auto it = listOfChapters.begin(); it != listOfChapters.end(); ++it)
	{
		 it->print();
	}
}