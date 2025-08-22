// Write a program to input two numbers and display their sum.

# include <stdio.h>
int main() {
    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    int c;
    c = a+b;
    printf("The sum of a and b = %d",c);
    return 0;
}