#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
int main() {
    pid_t pid = fork();
    
    if (pid < 0) {
        cerr << "Fork failed!" << endl;
        return 1;
    } 
    else if (pid == 0) {  // Child process
        while (true) {
            cout << "Child running..." << endl;
            sleep(1);
        }
    } 
    else {  // Parent process
        cout << "Parent running, will exit in 5 seconds..." << endl;
        sleep(5);
        cout << "Parent exiting..." << endl;
        // Parent terminates without waiting for child
    }
    return 0;
}