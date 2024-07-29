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

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int req_days = d - ((m1 * d) / (m1 + m2));
        printf("%d\n", req_days);
    }

    return 0;
}