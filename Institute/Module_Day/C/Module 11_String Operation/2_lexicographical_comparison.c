#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdarg.h>
#include <setjmp.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

typedef long long int ll;
#define mod 1000000007

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same!\n");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A is smaller!\n");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("B is smaller!\n");
            break;
        }
        
        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("A is smaller!\n");
            break;
        }
        else
        {
            printf("B is smalller!\n");
            break;
        }

    }

    return 0;
}