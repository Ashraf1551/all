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
    int m;
    scanf("%d", &m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d", &a[i]);
    }
    int n;
    scanf("%d", &n);
    int b[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d", &b[i]);
    }
    printf("The First Array: ");
    for(int i=0; i<m;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\nThe second Array: ");
    for(int i=0; i<n;i++)
    {
        printf("%d ", b[i]);
    }
    int arr[m+n];
    for(int i=0; i<m+n; i++)
    {
        arr[i]=a[i];
    }
    int i=m;
    for(int j=0; j<n;j++)
    {
        arr[i]=b[j];
        i++;
    }
    printf("\n\nThe new array: ");
    for(int i=0; i<m+n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}