#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main() {
    int tk;
    scanf("%d", &tk);

    if(tk>1000)
    {
        printf("I will buy Punjabi\n");
        if((tk-1000)>=500)
            printf("I will buy new shoes\nAlisa will buy new shoes\n"); 
    }
    else
        printf("Bad luck!\n");
    
    return 0;
}
