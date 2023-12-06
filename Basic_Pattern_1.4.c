#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i;
    char ch;
    for (i=0;i<N;++i) {
        for (ch='A';ch<'A'+N;ch++) 
		{
            printf("%c ",ch);
        }
           printf("
");
    }
}