#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int car=a/4;
    if(a%4!=0)
    {
      car++;
    }
    printf("%d",car);
}
    