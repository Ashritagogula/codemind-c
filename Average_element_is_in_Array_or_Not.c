#include <stdio.h>
int isValuePresent(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    int average = sum / size;
    int isPresent = isValuePresent(arr, size, average);
    if (isPresent) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
