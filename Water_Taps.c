#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int fill= x*y/(x+y);
    printf("%d",fill);
}