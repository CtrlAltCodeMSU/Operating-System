#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;

int main() {
    pid_t pid = fork(); 

    if (pid < 0) { 
        cerr << "Fork failed!" << endl;
        return 1;
    }

    if (pid == 0) { 
        cout << "Child process: Listing directory contents...\n" << endl;
        execlp("ls", "ls", "-l", NULL); 
        cerr << "execlp failed!" << endl; 
        return 1;
    } else { 
        wait(NULL); 
        cout << "\nParent process: Child has finished execution." << endl;
    }

    return 0;
}