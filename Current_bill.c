#include<stdio.h>
int main()
{
    int u;
    float uc,tbill;
    scanf("%d",&u);
    if(u<200)
    {
        uc=1.20;
    }
    else if(u>=200 && u<400)
    {
        uc=1.50;
    }
    else if(u>=400 && u<600)
    {
        uc=1.80;
    }
    else 
    {
        uc=2.00;
    }
    float bill=u*uc;
    if(bill>400)
    {
        tbill=bill+(bill*0.15);
    }
    else
    {
        tbill=bill+100;
    }
    printf("%.2f",tbill);
    }