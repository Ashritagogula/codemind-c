#include<stdio.h> 
int main()
{
    int n,first=0,second=1,remain,i;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",first);
        remain=first+second;
        first=second;
        second=remain;
    }
}