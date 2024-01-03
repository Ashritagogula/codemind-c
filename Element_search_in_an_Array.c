#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m,count=0;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}