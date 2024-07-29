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
    char a[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c\n", a[i]);
    }

    
    return 0;
}