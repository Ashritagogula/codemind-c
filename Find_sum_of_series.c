#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        sum += 1.0 / i;
    }
    printf("%.2f
",sum);
}
