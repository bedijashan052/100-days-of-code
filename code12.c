// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

# include <stdio.h>
int main() {
    int a;
    printf("enter a = ");
    scanf("%d",&a);
    if (a==0) {
        printf("a is zero");
    }else if (a>0) {
        printf("a is positive");
    }else{
        printf("a is negetive");
    }
    return 0;
}