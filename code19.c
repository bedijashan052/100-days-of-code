// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

# include <stdio.h>
int main() {
    int a,b,c;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    printf("enter c = ");
    scanf("%d",&c);
    if (a==b && b==c) {
        printf("Equilateral triangle");
    }else if (a==b || b==c || a==c) {
        printf("Isosceles triangle");
    }else {
        printf("Scalene triangle");
    }
    return 0;
}