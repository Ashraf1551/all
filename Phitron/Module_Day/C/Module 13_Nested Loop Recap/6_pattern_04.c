#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

typedef long long int ll;
#define mod 1000000007

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1, l = 3;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        {
            for (int j = 1; j <= k; j++)
            {
                printf("#");
            }
        }
        printf("\n");
        if (i <= n - 1)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }
    }

    return 0;
}