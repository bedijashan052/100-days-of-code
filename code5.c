// Write a program to convert temperature from Celsius to Fahrenheit.

# include <stdio.h>
int main() {
    int a;
    printf("enter temperature in celcius = ");
    scanf("%d",&a);
    int b;
    b = ((a*1.8)+32);
    printf("temperature in Fahrenheit = %d",b);
    return 0;

}