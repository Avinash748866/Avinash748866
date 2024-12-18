#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]) + 1;
    int missingNumber = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}
