#include<stdio.h>
int main()
{
    int a,b,sum=1,i,c;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
    sum=i*a;
    printf("%d x %d = %d
",a,i,sum);	
	}
	
}