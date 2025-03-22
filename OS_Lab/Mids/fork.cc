#include <iostream>
#include <unistd.h>
#include <sys/types.h>
using namespace std;
int main(){
    pid_t pid = fork();

    if (pid < 0) {  
        cout << "Fork failed!" << endl;
        return 1;
    }
    else if (pid == 0) {  
        cout << "I am the child process. My PID is " << getpid() << endl;
    }
    else {  
        cout << "I am the parent process. My child's PID is " << pid << endl;
    }
}