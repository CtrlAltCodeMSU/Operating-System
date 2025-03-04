#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){

    ifstream inFile("num.txt");
    
    if (!inFile)
    {
        cout << "Error: File not found!" ;
        return 1;
    }
    vector<int> arr;
    int num;

    while (inFile>>num)
    {
        arr.push_back(num);
    }
    inFile.close();
    
    if (arr.size()<2)
    {
        cout << "Need Atleast 2 numbers" ;
        return 1 ;
    }
    int missing = -1 ;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i]!=arr[i-1]+1)
        {
            missing = arr[i-1]+1;
            break;
        }
    }
    if (missing == -1)
    {
        cout << "No missing element found" ;
        return 0 ;
    }
    ofstream outfile("miss2.txt");
    if (outfile.is_open())
    {
        outfile << missing ;
        outfile.close();
        cout << "Missing number " << missing << " written to missing_number.txt\n";
    } else {
        cout << "Error writing to file.\n";
    }
    
    return 0;
}