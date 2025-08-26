// Write a program to input an integer and check whether it is even or odd using if–else.

# include <stdio.h>
int main () {
    int a;
    printf("enter a = ");
    scanf("%d",&a);
    if (a%2==0) {
        printf("%d is an even no.",a);
    }else{
        printf("%d is not an even no.",a);
    }
    return 0;
}