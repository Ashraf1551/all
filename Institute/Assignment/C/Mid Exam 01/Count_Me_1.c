#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main()
{
    int n, cnt_2 = 0, cnt_3 = 0;
    scanf("%d", &n);
    int k[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (k[i] % 2 == 0)
            cnt_2++;
        else if (k[i] % 3 == 0 && k[i] % 2 != 0)
        {
            //cnt_2++;
            cnt_3++;
        }
    }
    printf("%d %d", cnt_2, cnt_3);
    return 0;
}