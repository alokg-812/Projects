#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int N, X;
        scanf("%d%d", &N, &X);
        int total_cost = (N + 5) / 6 * X;
        printf("%d\n", total_cost);
    }
    return 0;
}