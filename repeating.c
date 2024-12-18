#include <stdio.h>

void findRepeatingAndNonRepeating(int arr[], int n) {
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Repeating elements: ");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            if (count > 1) {
                printf("%d ", arr[i]);
            }
        }
    }

    printf("\nNon-repeating elements: ");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count == 1) {
                printf("%d ", arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {4, 5, 6, 7, 4, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    findRepeatingAndNonRepeating(arr, n);

    return 0;
}
