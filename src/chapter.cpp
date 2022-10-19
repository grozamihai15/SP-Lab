 Chapter(string chapter_name)
    {
        this->chapter_Name = chapter_name;
    }
    int createSubChapter(string subchapterName)
    {
        vectorOfSubchapters.push_back(subchapterName);
        SubChapter subchapterNr(subchapterName);
        return sizeof(vectorOfSubchapters);
    }
    string getSubChapter(int indexSubchapter)
    {
        return vectorOfSubchapters[indexSubchapter];
    }