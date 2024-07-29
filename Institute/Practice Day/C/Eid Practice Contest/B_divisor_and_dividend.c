#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main()
{
    int d, q, r, divisor;
    scanf("%d %d %d", &d, &q, &r);

    divisor = (d - r) / q;
    printf("%d\n", divisor);

    return 0;
}