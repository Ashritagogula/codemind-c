#include <stdio.h>
int can_distribute_cookies(int N, int X) {
    if (N < X * (X + 1) / 2) {
        return 0;
    }

    return 1;  // Distribution
}

int main() {
    int N, X;
    scanf("%d", &N);
    scanf("%d", &X);
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
