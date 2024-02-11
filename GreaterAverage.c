#include <stdio.h>
int main()
{
    int n;
    float t, a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f%f%f", &a, &b, &c);
        t = ((a + b) / 2);
        if (t > c)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }