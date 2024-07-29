#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    lld n;
    scanf("%lld", &n);
    lld sum=(n*(n+1))/2;
    printf("%lld\n", sum);

    return 0;
}