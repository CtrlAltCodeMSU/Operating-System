#ifndef WORDCOUNT_H
#define WORDCOUNT_H

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class WordCount {
    public:
        WordCount(const string& filename);
        int countWords();
    private:
        string filename;
};
#endif