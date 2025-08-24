// Write a program to find and display the sum of the first n natural numbers.

# include <stdio.h>
int main() {
    int a,n;
    printf("n is the number of first n natural numbers of whom you want sum \n\n");
    printf("enter value of n = ");
    scanf("%d",&n);
    a = n*((n+2)/2);
    printf("sum of n natural numbers = %d",a);
    return 0;
}