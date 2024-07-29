#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    lld x, y;
    scanf("%lld %lld", &x, &y);

    lld ans= x*y;
    printf("%lld", ans);
    
    return 0;
}
