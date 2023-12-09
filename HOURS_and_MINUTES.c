#include<stdio.h>
int main()
{
    int tm,h,mi;
    scanf("%d",&tm);
    h=tm/60;
    mi=tm%60;
    printf("%d Hour(s) %d Minute(s)",h,mi);
}