#include <stdio.h>
int main() {
    int i, j, N;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        char ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }   
        // next line
        printf("
");
    }
}