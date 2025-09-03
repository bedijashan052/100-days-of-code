// Write a program to calculate the factorial of a number. 

#include <stdio.h>

int main() {
    int n, i;
    int fact = 1; // to store large values of factorial
    printf("enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("factorial of %d = %d\n", n, fact);
    }
    return 0;
}
