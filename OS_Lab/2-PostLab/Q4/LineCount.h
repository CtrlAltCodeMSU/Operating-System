#ifndef LINECOUNT_H
#define LINECOUNT_H

#include <iostream>
#include <fstream>

using namespace std;
class LineCount{
    public:
        LineCount(const string& filename);
        int countLines();
    private:
        string filename;
};
#endif