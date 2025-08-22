// Write a program to input two numbers and display their sum, difference, product, and quotient.

# include <stdio.h>
int main() {
    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    int c;
    c=a+b;
    printf("sum of a and b = %d\n",c);
    int d;
    d = a-b;
    printf("difference of a and b = %d\n",d);
    int e;
    e = a*b;
    printf("product of a and b = %d\n",e);
    int f;
    f = a/b;
    printf("quotient of a and b = %d",f);
    return 0;
}