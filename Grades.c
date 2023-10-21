#include<stdio.h>
int main()
{
    int phy,che,bio,mat,cs;
    scanf("%d%d%d%d%d",&phy,&che,&bio,&mat,&cs);
    float sub= (phy+che+bio+mat+cs)/500.0;
    int x=sub*(100);
    if (x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80)
    {
        printf("Grade B");
    }
    else if(x>=70)
    {
        printf("Grade C");
    }
    else if(x>=60)
    {
        printf("Grade D");
    }
    else if(x>=40)
    {
        printf("Grade E");
    }
    else if(x<40)
    {
        printf("Grade F");
    }
}