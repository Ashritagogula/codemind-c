#include<stdio.h> //1 to 10 ---------- 10 9 8 7 6 5 4 3 2 1
int main()            //a=1 ; b=10  ;b>=1 
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=b;i>=a;i--) //i=10;10<=1;i++--->11
	{
		printf("%d ",i);
	}
}