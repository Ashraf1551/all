#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int rina=(x-y)/2;
    int mina=x-rina;
    printf("%d %d", mina, rina);

    return 0;
}