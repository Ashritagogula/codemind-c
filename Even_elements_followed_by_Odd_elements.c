#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);// 1 2 3 4 5 6 7 8
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0) //2 4 6 8 
        {
            printf("%d ",arr[i]); //2 4 6 8
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1) //1 3 5 7
        {
            printf("%d ",arr[i]);
        }
    }
}