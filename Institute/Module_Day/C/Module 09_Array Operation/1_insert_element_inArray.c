#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    int a[6]={10,30,40,50,60};
    for(int i=5; i>=1; i--)
    {
        a[i]=a[i-1];
    }
    for(int i=0; i<6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    a[1]=20;
    for(int i=0; i<6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}