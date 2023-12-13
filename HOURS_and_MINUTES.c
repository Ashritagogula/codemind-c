#include<stdio.h>
int main()
{
    int h,m,i;
    scanf("%d",&i);
    h=i/60;
    m=i%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}