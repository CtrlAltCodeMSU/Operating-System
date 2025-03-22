// #include <iostream>
// #include <unistd.h>  
// #include <sys/wait.h>  

// using namespace std;

// int main() {
//     pid_t pid = fork();  

//     if (pid < 0) {
//         cout << "Fork failed!" << endl;
//         return 1;
//     }
//     else if (pid == 0) {  
//         cout << "Child process replacing itself with 'ls' command..." << endl;
//         execlp("ls", "ls", "-l", NULL);  
        
        
//         cout << "Exec failed!" << endl;
//         return 1;
//     }
//     else {  
//         wait(NULL);  
//         cout << "Parent process continues..." << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <unistd.h>  // For fork() and exec()
#include <sys/wait.h>  // For wait()

using namespace std;

int main() {
    pid_t pid = fork();  // Create a child process

    if (pid < 0) {
        cout << "Fork failed!" << endl;
        return 1;
    }
    else if (pid == 0) {  // Child process
        cout << "Child process replacing itself with 'ls' command..." << endl;
        execlp("ls", "ls", "-l", NULL);  // Replace child with "ls -l"
        
        // If exec() fails, this runs
        cout << "Exec failed!" << endl;
        return 1;
    }
    else {  // Parent process
        wait(NULL);  // Wait for child to finish
        cout << "Parent process continues..." << endl;
    }

    return 0;
}