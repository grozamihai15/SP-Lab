  SubChapter(string subchapter_name)
    {
        this->subChapter_Name = subchapter_name;
    }
    void createNewImage(string imageNew)
    {
        Image newImage;
        newImage.Initialise(imageNew);
       
    }
    void createNewParagraph(string paraNew)
    {
        Paragraph newPara;
        newPara.Initialise(paraNew);
       
    }
    void createNewTable(string tableNew)
    {
        Table newTable;
        newTable.Initialise(tableNew);
    }
    void print()
    {
        cout <<"Subchapter: " << subChapter_Name << endl;
        for (auto i = 0; i < vParagraph.size(); i++)
            cout << "Paragraph: " << vParagraph[i] << endl;
        for (auto i = 0; i < vImage.size(); i++)
            cout << "Image with name: " << vImage[i] << endl;
        for (auto i = 0; i < vTable.size(); i++)
            cout << "Table with title: " << vTable[i] << endl;
    }