// Write a program to input a year and check whether it is a leap year or not using conditional statements.

# include <stdio.h>
int main() {
    int a;
    printf("enter year = ");
    scanf("%d",&a);
    if (a%4==0) {
        printf("%d is a leap year",a);
    }else{
        printf("%d is not a leap year",a);
    }
    return 0;
}