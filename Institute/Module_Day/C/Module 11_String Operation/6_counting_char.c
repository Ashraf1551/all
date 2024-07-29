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

int main()
{
    char s[100];
    scanf("%s", s);

    int cnt[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        cnt[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }
    return 0;
}