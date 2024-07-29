#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    int gift, child;
    scanf("%d %d", &gift, &child);
    printf("%d %d", gift/child, gift%child);

    return 0;
}