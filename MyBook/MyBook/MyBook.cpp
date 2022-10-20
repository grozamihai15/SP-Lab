#include "book.h"
#include "author.h"
#include "chapter.h"
#include "subchapter.h"
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{  
    Book discoTitanic("Disco Titanic");
    Author rpGheo("Radu Pavel Gheo");

    discoTitanic.add_Author(rpGheo);
    int indexChapterOne = discoTitanic.create_Chapter("Capitolul 1");
    Chapter chp1 = discoTitanic.get_Chapter(indexChapterOne);
    int indexSubchapterOneOne = chp1.create_SubChapter("Subcapitolul 1.1");
    SubChapter scOneOne=chp1.get_SubChapter(indexSubchapterOneOne);

    scOneOne.create_NewParagraph("Paragraph 1"); 
    scOneOne.create_NewParagraph("Paragraph 2");
    scOneOne.create_NewParagraph("Paragraph 3");
    scOneOne.create_NewImage("Image 1");
    scOneOne.create_NewParagraph("Paragraph 4");
    scOneOne.create_NewTable("Table 1");
    scOneOne.create_NewParagraph("Paragraph 5");

    scOneOne.print();

}
