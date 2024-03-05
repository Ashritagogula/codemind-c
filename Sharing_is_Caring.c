#include <stdio.h>

// Function to check if it's possible to distribute cookies as required
int can_distribute_cookies(int N, int X) {
    // Check if it's possible to distribute cookies as required
    if (N < X * (X + 1) / 2) {
        return 0;  // Not enough cookies for each student to have a distinct number
    }

    return 1;  // Distribution is possible
}

int main() {
    // Input values for N and X (number of cookies and students)
    int N, X;
    scanf("%d", &N);
    scanf("%d", &X);

    // Check if distribution is possible
    int result = can_distribute_cookies(N, X);
    if (result) {
        printf("YES
");
    } else {
        printf("NO
");
    }

    return 0;
}
