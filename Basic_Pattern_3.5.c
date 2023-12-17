#include <stdio.h>
int main() {
    int i, j, N;
    scanf("%d", &N);
    for (i = N; i >= 1; i--)
	 {
        char ch = 'A';
        for (j = 1; j <= i; j++)
		 {
            printf("%c ", ch++);
        }
        printf("
");
    }

}