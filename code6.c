// Write a program to swap two numbers using a third variable.

# include <stdio.h>
int main() {
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}