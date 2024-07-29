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
    int s = n - 1, k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = k; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        s--;
        k++;
    }
    return 0;
}
