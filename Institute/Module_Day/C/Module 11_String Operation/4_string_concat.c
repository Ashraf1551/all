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

    int k=strlen(a);
    for(int i=0; i<=strlen(b); i++)
    {
        a[k]=b[i];
        k++;
    }

    printf("%s", a);

    return 0;
}