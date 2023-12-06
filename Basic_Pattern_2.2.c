#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) // i=1 1<=5 1 2 3 4 5
    {
        for(j=1;j<=i;j++) 
        {// j=1 1<=1 2 3 4 5 , 1 2 3 4 5        {
            printf("%d ",i);
        }
        printf("
");
    }
}