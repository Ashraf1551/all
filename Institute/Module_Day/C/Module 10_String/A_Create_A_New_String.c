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

int main() {
    char s[1001], t[1001];
    // fgets(s, sizeof(s), stdin);
    // s[strcspn(s, "\n")] = '\0';
    // fgets(t, sizeof(t), stdin);
    scanf("%s %s", s, t);
    int s_len=strlen(s);
    int t_len=strlen(t);

    printf("%d %d\n%s %s", s_len, t_len, s, t);
    return 0;
}