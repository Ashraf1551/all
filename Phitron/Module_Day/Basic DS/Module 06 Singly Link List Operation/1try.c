#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 5, 7};
    int i;

    // Printing addresses of each index in decimal
    for(i = 0; i < 5; i++) {
        printf("Address of a[%d]: %lu\n", i, (unsigned long)&a[i]);
    }
    
    return 0;
}
