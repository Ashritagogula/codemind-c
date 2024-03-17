#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float hyp = (sqrt(a*a+b*b));
    printf("%.2f",hyp);
}