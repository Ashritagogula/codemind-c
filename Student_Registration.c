#include<stdio.h>
int main()
{
    int t,n,m,k,a,b,c;
    scanf("%d%d%d%d%d%d%d",&t,&n,&m,&k,&a,&b,&c);
    if((m-k)>=n)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
    if((b-c)>=a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}