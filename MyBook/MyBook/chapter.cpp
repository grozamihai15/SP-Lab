#include "chapter.h"
#include "subchapter.h"

Chapter::Chapter(string chaptername)
{
	this->chapterName = chaptername;
}
int Chapter::create_SubChapter(string numecapitol)
{
	SubChapter subchapter(numecapitol);
	listOfSubChapters.push_back(subchapter);
	return listOfSubChapters.size();
}
SubChapter Chapter::get_SubChapter(int poz)
{
	auto it = listOfSubChapters.begin();
	advance(it, poz);
	return *it;
}
void Chapter::print()
{
	cout << "Nume capitol: " << chapterName<<endl;
	cout << "Capitolu are urmatoarele subcapitole:" << endl;
	for (auto it = listOfSubChapters.begin(); it != listOfSubChapters.end(); ++it)
	{
		it->print();
	}
}