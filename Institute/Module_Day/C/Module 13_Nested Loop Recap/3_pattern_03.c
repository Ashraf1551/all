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

int main() {
    int n, k=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            printf("%d ", j);
        }
        k++;
        printf("\n");
    }

    return 0;
}