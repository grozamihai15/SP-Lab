#include "book.h"

Book::Book(string bookName)
{
    this->book_Name = bookName;
}
void Book::addAuthor(Author authorName)
{
    this->author = authorName;
}
int Book::createChapter(string chapterName)
{
    Chapter newChapter(chapterName);
    listOfChapters.push_back(newChapter);
    return listOfChapters.size();
}
Chapter Book::getChapter(int indexChapter)
{
    //for(list<Chapter>::iterator  it = listOfChapters.begin(); it!=listOfChapters.end(); ++it)
    list<Chapter>::iterator it = listOfChapters.begin();
    advance(it, indexChapter - 1);
    return *it;
}
void Book::print()
{
    cout << "Titlu: " << this->book_Name << endl << endl;
}