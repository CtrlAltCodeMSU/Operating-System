#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){

    if (argc<2)
    {
        cout << "Error" ;
        return 1;
    }
    int sum = 0 ;
    int count = argc - 1;
    int numbers[count] ;

    for (int i = 1; i < argc ; i++)
    {
        numbers[i-1] = atoi(argv[i]);
        sum += numbers[i-1];
    }
    
    double average = static_cast<double>(sum)/count ;

    cout <<"Sum: " << sum << endl;
    cout <<"Average: " << average << endl;
    
    return 0;
}