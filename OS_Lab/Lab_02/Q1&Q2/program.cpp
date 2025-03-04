#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[]){
    if (argc!=3){
        cout << "Usage: " << argv[0] << "<num1> <num2>\n" << endl;
        return 1 ;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    cout << "Sum: " << num1 + num2 << endl;
    return 0;
}