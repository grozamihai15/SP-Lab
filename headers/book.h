#pragma once
#include <list>
#include <string>
using namespace std; 

class Book
{
public:
    Book(string bookName);
    void addAuthor(Author authorName);
    int createChapter(string chapterName);
    Chapter getChapter(int indexChapter);
    void print();
private:
    Author author;
    string book_Name;
    list <Chapter> listOfChapters;
};
