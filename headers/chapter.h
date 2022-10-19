class Chapter 
{
public:
    Chapter(string chapter_name);
    int createSubChapter(string subchapterName);
    string getSubChapter(int indexSubchapter);
private:
    string chapter_Name;
    vector<string>vectorOfSubchapters;
};