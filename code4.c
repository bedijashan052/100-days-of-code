// Write a program to calculate the area and circumference of a circle given its radius.

# include <stdio.h>
int main() {
    int radius;
    printf("Enter radius = ");
    scanf("%d",&radius);
    float a;
    a = (3.14)*radius*radius; 
    printf("area of circle = %.2f\n",a);
    float b;
    b = 2*(3.14)*radius;
    printf("circumference of circle = %.2f",b);
    return 0;
}    
