#include <iostream>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

void addNumbers(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    cout << "Sum: " << sum << endl;
}

void findAverage(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    cout << "Average: " << static_cast<float>(sum) / arr.size() << endl;
}

void findMax(const vector<int>& arr) {
    int maxVal = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Max: " << maxVal << endl;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " num1 num2 num3 ..." << endl;
        return 1;
    }

    vector<int> arr;
    for (int i = 1; i < argc; i++) {
        arr.push_back(atoi(argv[i]));
    }

    pid_t p1 = fork();
    if (p1 == 0) {
        addNumbers(arr);
        exit(0);
    }

    pid_t p2 = fork();
    if (p2 == 0) {
        findAverage(arr);
        exit(0);
    }

    pid_t p3 = fork();
    if (p3 == 0) {
        findMax(arr);
        exit(0);
    }

    wait(NULL);
    wait(NULL);
    wait(NULL);

    return 0;
}
