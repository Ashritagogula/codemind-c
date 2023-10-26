#include<stdio.h>
int main()
{
    char col,V,I,B,G,Y,O,R;
    scanf("%s",&col);
    if(col=='V')
    {
        printf("Violet");
    }
    else if(col=='I')
    {
        printf("Indigo");
    }
    else if(col=='B')
    {
        printf("Blue");
    }
    else if(col=='G')
    {
        printf("Green");
    }
     else if(col=='Y')
    {
        printf("Yellow");
    }
    else if(col=='O')
    {
        printf("Orange");
    }
     else if(col=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}