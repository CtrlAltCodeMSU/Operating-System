#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){

    if(argc!=2){
        cout << "Usage: " << argv[0] << "<filename>\n" ;
        return 1 ;
    }
    ifstream file(argv[1]);
    if (!file){
        cout << "Error: file '" << argv[1] <<"' not found\n" ;
        return 1;
    }
    string line;

    while (getline(file, line)){
        cout << line << endl;
    }
    
    file.close();
    
    return 0;
}