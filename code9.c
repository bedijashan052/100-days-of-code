// Write a program to calculate simple and compound interest for given principal, rate, and time.

# include <stdio.h>
# include <math.h>
int main() {
    int a,c;
    printf("enter principal amount = ");
    scanf("%d",&a);
    float b;
    printf("rate of interest = ");
    scanf("%f",&b);
    printf("time period = ");
    scanf("%d",&c);
    int d;
    d = (a*b*c)/100;
    printf("simple interest = %d\n",d);
    float e;
    e = a * pow((1+b/100) ,c) - a;
    printf("compound interest = %.2f",e);
    return 0;
}