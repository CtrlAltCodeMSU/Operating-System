#ifndef LETTERCOUNT_H
#define LETTERCOUNT_H

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

class LetterCount{
public:
    LetterCount(const string& filename);

    int countLetters();
private:
    string filename;
};
#endif