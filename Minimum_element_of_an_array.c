#include<stdio.h>
int main()
{
	int i,n,min;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//12 -1 34 -456 56
	}
	min=a[0];
	for(i=1;i<n;i++) //i=1
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
}