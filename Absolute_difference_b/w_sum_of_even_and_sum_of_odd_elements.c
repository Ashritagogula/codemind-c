#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,c=0,d=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]%2==0)
    {
        c=c+arr[i];
    }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            d=d+arr[i];
        }
    }
    printf("%d",abs(c-d));
}