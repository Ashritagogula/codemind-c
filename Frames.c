#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d%d%d",&m,&n,&x);
    int perimeter = 2*(n+m);
    int cost = perimeter*x;
    printf("%d",cost);
}