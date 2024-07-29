#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main()
{
    char s[100001];
    int cnt = 0;
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        //char ch = s[i];

        if ((s[i] >= 'a' && s[i] <= 'z') && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}