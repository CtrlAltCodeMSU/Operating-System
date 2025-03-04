#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc , char *argv[]){
    if (argc < 2){
        cout << "Usage: " << argv[0] << " <numbers> \n" ;
        return 1 ;
    }

    vector<int> numbers ;

    for (int i = 0; i < argc; i++){
        numbers.push_back(atoi(argv[i]));
    }
    sort(numbers.begin(), numbers.end());

    cout << "Sorted Numbers: " ;
    for (int num : numbers) {
       cout << num << " " ;
    }
    cout << endl;
    
    return 0;
}