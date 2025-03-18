#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;

int main() {
    pid_t pid = fork(); // Create child process

    if (pid < 0) { // Error in fork
        cerr << "Fork failed!" << endl;
        return 1;
    }

    if (pid == 0) { // Child process
        cout << "Child process: Listing directory contents...\n" << endl;
        execlp("ls", "ls", "-l", NULL); // Execute 'ls -l' command
        cerr << "execlp failed!" << endl; // Only prints if execlp fails
        return 1;
    } else { // Parent process
        wait(NULL); // Wait for child to complete
        cout << "\nParent process: Child has finished execution." << endl;
    }

    return 0;
}