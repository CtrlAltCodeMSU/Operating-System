#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){
    if (argc < 3)
    {
        cout << "Error" ;
        return 1 ;
    }
    int arr[argc-1];

    for (int i =1; i < argc; i++)
    {
        arr[i-1] = atoi(argv[i]);
    }
    int missing = -1 ;

    for (int i = 1 ; i < argc -1 ; i++)
    {
        if (arr[i]!=arr[i-1]+1){
            missing = arr[i-1]+1 ;
            break;
        }   
    }
    if (missing==-1){
        cout << "No missing Element Found!" ;
    }
    ofstream outFile("missing.txt");

    if (outFile.is_open())
    {
        outFile << "Missing Number is: " << endl;
        outFile << missing ;
        outFile.close();
        cout << "Missing number " << missing << " written to missing.txt\n";
    }
     else {
        cout << "Error writing to file.\n";
    }

    return 0;
}