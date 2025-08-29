// Write a program to find the roots of a quadratic equation and categorize them.

# include <stdio.h>
# include <math.h>
int main () {
    float a,b,c;
    printf("enter a = ");
    scanf("%f",&a);
    printf("enter b = ");
    scanf("%f",&b);
    printf("enter c = ");
    scanf("%f",&c);
    float d;
    d = b * b - 4 * a * c;
    printf("discriminant = %.2f\n",d);
    if (d>0) {
        float r1,r2;
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }else if (d==0) {
        float r1;
        r1 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root = %.2f\n", r1);
    } else {
        printf("Roots are complex\n");
    }
    return 0;
}