#include <iostream>
#include <unistd.h>  // For fork()
#include <sys/types.h> // For pid_t

using namespace std;

int var_glb = 0; // A global variable

int main() {
    pid_t forkid;  // Process ID returned by fork()
    int var_lcl = 0; // A local variable

    forkid = fork(); // Create a new process

    if (forkid >= 0) { // Check if fork was successful
        if (forkid == 0) {  // This is the child process
            var_lcl++;  // Increment local variable
            var_glb++;  // Increment global variable
            cout << "\nHello from Child Process :: var_lcl = [" << var_lcl
                 << "], var_glb = [" << var_glb << "]" << endl;
        } else {  // Parent process
            var_lcl = 10;  // Set local variable
            var_glb = 20;  // Set global variable
            cout << "\nHello from Parent Process :: var_lcl = [" << var_lcl
                 << "], var_glb = [" << var_glb << "]" << endl;
        }
    } else { // Fork failed
        cout << "\nFork failed, quitting!!!!!!" << endl;
        return 1;
    }

    return 0;
}