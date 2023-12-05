#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d%d",&j,&n);
    for(i=j;i<=n;i++)
    {
        if(i%3==0 && i%2==0)
        {
        count++;
        }
    }
    printf("%d",count);
}