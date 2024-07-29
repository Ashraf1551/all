#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    int a[6]={10,30,40,50,60};
    for(int i=1; i<5; i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0; i<4; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}