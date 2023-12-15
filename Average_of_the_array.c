#include<stdio.h>
int main()
{
    int i,n,sum=0;//i,n=7
    scanf("%d",&n); //n=7
    int arr[n];//arr[7]
    for(i=0;i<n;i++){      //i=0;i<7;i++ 0 1 2 3 4 5 6 
        scanf("%d",&arr[i]); //arr[0,1,2,3,4,5,6]
    }
    float avg;
    for(i=0;i<n;i++) { //i=0 
        sum=sum+arr[i];
    }
        avg=sum/(float)n;
    
    printf("%.2f",avg);
}