// Write a program to assign grades based on a percentage input.

# include <stdio.h>
int main() {
    float a;
    printf("enter your percentage = ");
    scanf("%f",&a);
    if (a>=90 && a<=100) {
        printf("grade A");
    }else if (a>=70 && a<90) {
        printf("grade B");
    }else if (a>=50 && a<70) {
        printf("grade C");
    }else if (a>=0 && a<50) {
        printf("grade D");
    }
    return 0;
}    