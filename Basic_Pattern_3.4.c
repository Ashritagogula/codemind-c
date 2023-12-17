#include <stdio.h>
int main() 
{
    int i, j, N;
    scanf("%d", &N);
    char ch = 'A' + N - 1;
    for (i = N; i >= 1; i--)  
	{
        for (j = 1; j <= i; j++)
		 {
            printf("%c ", ch);
        }
        printf("
");
        ch--;
    }
}