#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    pid_t pid = fork(); // Create child process

    if (pid < 0) {
        cout << "Fork failed!" << endl;
        return 1;
    }
    else if (pid == 0) {  // Child process
        for (int i = 0; i < 5; i++) {
            cout << "Child process running: " << i << endl;
            sleep(1); // Simulating work
        }
    }
    else {  // Parent process
        for (int i = 0; i < 5; i++) {
            cout << "Parent process running: " << i << endl;
            sleep(1); // Simulating work
        }
    }

    return 0;
}