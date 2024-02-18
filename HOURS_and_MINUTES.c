#include<stdio.h>
int main()
{
    int hours,min,sec,tmin;
    scanf("%d",&tmin);
    hours= tmin/60;  //400/60
    min= tmin%60;
    printf("%d Hour(s) %d Minute(s)",hours,min);
    
}