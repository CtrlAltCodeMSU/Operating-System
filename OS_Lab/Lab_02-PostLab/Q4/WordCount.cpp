#include "WordCount.h"

WordCount::WordCount(const string& filename){
    this -> filename = filename ;
}

int WordCount::countWords(){
    ifstream file(filename);
    if (!file)
    {
        cout << "Error cannot open file" ;
        return -1 ;
    }
    int wordCount = 0 ;

    string word ;

    while (file >> word)
    {
        wordCount++;
    }
    file.close();
    return wordCount;
}