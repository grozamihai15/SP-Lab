#pragma once
#include <iostream>
#include <iterator>
#include <list>
#include <string>

using namespace std;

class Chapter
{
public:
	Chapter(string chaptername);
	int create_SubChapter(string nume);
	SubChapter get_SubChapter(int poz);
	void print();
private:
	string chapterName;
	list <SubChapter> listOfSubChapters;
};