#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    int x;
    scanf("%d", &x);
    int d=x/5;
    int f=x-d;
    printf("%d %d", f, d);

    return 0;
}