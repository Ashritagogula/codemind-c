#include<stdio.h>
int main()
{
    int i,n,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
                printf(" ");
            }
             for(j=i;j>=1;j--)
    {
                printf("%d ",j);
            }
        printf("
");
    }
    }