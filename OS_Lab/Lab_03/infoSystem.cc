#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/utsname.h>

using namespace std;

int main() {
    pid_t pid = getpid();
    cout << "Process ID: " << pid << endl;

    pid_t ppid = getppid();
    cout << "Parent Process ID: " << ppid << endl;

    
    struct utsname sys_info;
    if (uname(&sys_info) == 0) {
        cout << "System Name: " << sys_info.sysname << endl;
        cout << "Node Name: " << sys_info.nodename << endl;
        cout << "Release: " << sys_info.release << endl;
        cout << "Version: " << sys_info.version << endl;
        cout << "Machine: " << sys_info.machine << endl;
    } else {
        cerr << "Failed to get system information!" << endl;
    }

    return 0;
}