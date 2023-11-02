#include<stdio.h>
int main()
{
    float bs,hra,da,pf,gross;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gross=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gross);
}