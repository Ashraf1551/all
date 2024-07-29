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

int count_before_one(int A[], int N)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ashruff_007 = count_before_one(a, n);
    printf("%d\n", ashruff_007);
    return 0;
}