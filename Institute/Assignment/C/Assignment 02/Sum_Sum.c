#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main()
{
    int n, sumPos = 0, sumNeg = 0;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
            sumPos += v[i];
        else
            sumNeg += v[i];
    }
    printf("%d %d", sumPos, sumNeg);

    return 0;
}