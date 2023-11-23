#include<stdio.h>
int main()
{
    int i,a,sum=1;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        sum=a*i;
        printf("%d x %d = %d
",a,i,sum);
    }
}