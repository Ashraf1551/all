#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    int n,temp,rem,sum=0;
    scanf("%d", &n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    printf("%d\n", sum);
    return 0;
}