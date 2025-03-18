#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    cout << "Executing system commands..." << endl;

    system("mkdir test_dir");

    system("touch test_dir/sample.txt");
    system("cp test_dir/sample.txt test_dir/copy_sample.txt");

    system("ls test_dir");

    system("rm test_dir/sample.txt test_dir/copy_sample.txt");
    system("rmdir test_dir");

    return 0;
}