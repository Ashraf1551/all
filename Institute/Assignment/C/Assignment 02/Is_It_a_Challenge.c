#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main()
{
    int n;
    scanf("%d", &n);
    if(n==0)
    {
        printf("%d", n);
    }
    if (n < 0)
    {
        for (int i = n; i <= 0; i++)
            printf("%d ", i);
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    return 0;
}