#include "LetterCount.h"
#include "WordCount.h"
#include "LineCount.h"

int main(){
    string filename = "counting.txt";

    LetterCount letterCounter(filename);
    WordCount wordCounter(filename);
    LineCount lineCounter(filename);

    cout << "File: " << filename << endl;
    cout << "Total Letters: " << letterCounter.countLetters() << endl;
    cout << "Total Words: " << wordCounter.countWords() << endl;
    cout << "Total Lines: " << lineCounter.countLines() << endl;
}