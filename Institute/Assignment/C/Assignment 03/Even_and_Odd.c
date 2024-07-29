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

void odd_even()
{
    int n;
    scanf("%d", &n);

    int even_count = 0, odd_count = 0;
    int i = 0;
    while (i < n)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        i++;
    }

    printf("%d %d\n", even_count, odd_count);
}

int main()
{
    odd_even();
    return 0;
}