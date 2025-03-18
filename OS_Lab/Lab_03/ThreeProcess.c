#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
void addNumbers(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
}

void findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Average: %.2f\n", sum / (float)size);
}

void findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max: %d\n", max);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    int arr[argc - 1];
    for (int i = 1; i < argc; i++) {
        arr[i - 1] = atoi(argv[i]);
    }
    
    pid_t p1 = fork();
    if (p1 == 0) {
        addNumbers(arr, argc - 1);
        exit(0);
    }
    
    pid_t p2 = fork();
    if (p2 == 0) {
        findAverage(arr, argc - 1);
        exit(0);
    }
    
    pid_t p3 = fork();
    if (p3 == 0) {
        findMax(arr, argc - 1);
        exit(0);
    }

    wait(NULL);
    wait(NULL);
    wait(NULL);

    return 0;
}