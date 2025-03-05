#include "LetterCount.h"

LetterCount::LetterCount(const string& filename){
    this -> filename = filename ;
}

int LetterCount::countLetters(){
    ifstream file(filename);
    if (!file)
    {
        cout << "Error: Cannot Open file " << filename ;
        return -1;
    }

int letterCount = 0 ;
char ch;
while (file.get(ch))
{
    if (isalpha(ch))
    {
        letterCount++;
    }
    
  }
  file.close();
  return letterCount;
}
