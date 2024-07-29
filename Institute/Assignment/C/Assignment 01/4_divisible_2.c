#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    // Your code here
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
    	if(i%3==0 && i%7==0)
    		printf("%d\n", i);
    }
    
    return 0;
}
