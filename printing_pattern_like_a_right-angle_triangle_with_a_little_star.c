#include <stdio.h>
int main() 
{
    int i,j,star;
    scanf("%d", &star);
    for (i = 1; i <= star; i++) //star=5 ; 1<=5 -- 1 2 3 4 5
	{
        for (j = 1; j <= i; j++) //j=1 ; 1<= 1 2 3 4 5
		{
            printf("*");
        }
        printf("
");
    }

}
