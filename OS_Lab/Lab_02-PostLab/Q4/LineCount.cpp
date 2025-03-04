#include "LineCount.h"

LineCount::LineCount(const string& filename){
    this -> filename = filename ;
}

int LineCount::countLines(){
    ifstream file(filename);
    if(!file){
        cout << "Error Opening file" ;
        return -1 ;
    }
    int lineCount ;
    string line;

    while (getline(file, line))
    {
        lineCount++;
    }
    file.close();
    return lineCount;
}