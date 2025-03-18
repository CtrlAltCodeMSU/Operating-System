#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main() {
    pid_t pid = fork(); 

    if (pid < 0) {
        cerr << "Fork failed!" << endl;
        return 1;
    }

    if (pid == 0) { 
        cout << "Child Process:\n";
        cout << "PID: " << getpid() << endl;
        cout << "Parent PID: " << getppid() << endl;
    } else { 
        cout << "Parent Process:\n";
        cout << "PID: " << getpid() << endl;
        cout << "Child PID: " << pid << endl;
    }

    return 0;
}