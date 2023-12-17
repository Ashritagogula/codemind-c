#include <stdio.h>

int TheLargestDigit(int number) {
    int largestDigit = 0;
    number = (number < 0) ? -number : number;

    while (number > 0) {
        int digit = number % 10;
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        number /= 10;
    }

    return largestDigit;
}

int main() {
    int num;
    scanf("%d", &num);
    int result = TheLargestDigit(num);
    printf("%d",result);

    return 0;
}

