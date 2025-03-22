#include <iostream>
#include <unistd.h>  
#include <sys/wait.h>  

using namespace std;

int main() {
    pid_t pid = fork();  

    if (pid < 0) {
        cout << "Fork failed!" << endl;
        return 1;
    }
    else if (pid == 0) {  
        cout << "Child process replacing itself with 'ls' command..." << endl;
        execlp("ls", "ls", "-l", NULL);  
        
        
        cout << "Exec failed!" << endl;
        return 1;
    }
    else {  
        wait(NULL);  
        cout << "Parent process continues..." << endl;
    }

    return 0;
}