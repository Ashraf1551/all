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
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt[101]={0};
    for(int i=0; i<n; i++)
    {
        cnt[arr[i]]++;
    }
    for(int i=0; i<=6; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}