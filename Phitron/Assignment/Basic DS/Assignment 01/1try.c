#include <stdio.h>

void printHourglass(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces before each line of asterisks
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print the asterisks
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces before each line of asterisks
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print the asterisks
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter an odd number: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }
    printHourglass(n);
    return 0;
}