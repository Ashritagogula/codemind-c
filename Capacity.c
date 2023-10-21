#include<stdio.h>
int main()
{
    int S,T,B;
    int capacity;
    scanf("%d%d%d",&S,&T,&B);
    capacity= 2*T*S*B*0.5;
    printf("%d KB",capacity);
}
//512/1024