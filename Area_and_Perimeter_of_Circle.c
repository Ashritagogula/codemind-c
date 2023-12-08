#include<stdio.h>
int main()
{
int r;
scanf("%d",&r);
float area = 3.14*r*r;
float perimeter = 3.14*2*r;
printf("%.2f
%.2f",area,perimeter);
}