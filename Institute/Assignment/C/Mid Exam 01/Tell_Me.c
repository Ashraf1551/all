#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main()
{

    int testCases;
    scanf("%d", &testCases);
    while (testCases--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int x, cnt = 0;
        scanf("%d", &x);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                printf("YES\n");
                cnt++;
                break;
            }
        }
        if (cnt == 0)
            printf("NO\n");
    }
    return 0;
}