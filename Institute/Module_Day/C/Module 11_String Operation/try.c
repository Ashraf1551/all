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
void print(int x)
{
    printf("1");
    for(int i=2; i<=x; i++)
    {
        printf(" %d", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);

    return 0;
}
