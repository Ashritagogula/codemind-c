#include<stdio.h>
int main()
{
    float area, perimeter;
    int r;
    scanf("%d",&r);
    area= 2*3.14*r;
    perimeter= 3.14*r*r;
    printf("%.2f
%.2f",perimeter,area);
    
}