class SubChapter
{
public:
   
    SubChapter(string subchapter_name);
    void createNewImage(string imageNew);
    void createNewParagraph(string paraNew);
    void createNewTable(string tableNew);
    void print();
    

private:
    string subChapter_Name;
};