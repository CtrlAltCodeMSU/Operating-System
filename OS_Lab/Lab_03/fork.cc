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
    else if (pid == 0) {
        for (int i = 0; i < 5; i++) {
            cout << "I am a child process" << endl;
        }
    }
    else { 
        for (int i = 0; i < 5; i++) {
            cout << "I am a parent process" << endl;
        }
        wait(NULL); 
    }

    return 0;
}
