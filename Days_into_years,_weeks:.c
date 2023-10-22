#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    int years = days/365;
    int rdays=days%365;
    int weeks = rdays/7;
    int rweeks=rdays%7;
    printf("%d
%d
",years,weeks);
}