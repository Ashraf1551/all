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
    char a[100], b[100];
    scanf("%s %s", a, b);

    int v=strcmp(a,b);
    if(v>0)
    {
        printf("B is smaller!\n");
    }
    else if(v<0)
    {
        printf("A is smaller!\n");
    }
    else
    {
        printf("Same!\n");
    }

    return 0;
}