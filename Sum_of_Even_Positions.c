#include <stdio.h>

int main() {
    int arr[100]; 
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }
    printf("%d
", sum);

}