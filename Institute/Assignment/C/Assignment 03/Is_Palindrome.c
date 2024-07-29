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

int is_palindrome(char s[])
{
    int i = 0, j = strlen(s) - 1;
    int result = 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            result = 0;
            break;
        }
        i++;
        j--;
    }

    return result;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    int result = is_palindrome(s);

    if (result)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
