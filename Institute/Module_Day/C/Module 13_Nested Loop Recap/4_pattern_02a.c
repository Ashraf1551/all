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
    int n,k,s;
    scanf("%d", &n);
    k=2*n-1;
    s=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=s; j++)
        {
            printf(" ");
        }
        for(int i=1; i<=k; i++)
        {
            printf("*");
        }
        k-=2;
        s++;
        printf("\n");
    }
    return 0;
}