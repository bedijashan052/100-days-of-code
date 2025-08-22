// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

# include <stdio.h>
int main() {
    int length,breadth;
    printf("Enter length = ");
    scanf("%d",&length);
    printf("Enter breadth = ");
    scanf("%d",&breadth);
    int c;
    c = length*breadth;
    printf("area of rectangle = %d\n",c);
    int d;
    d = 2*(length+breadth);
    printf("perimeter of rectangle = %d",d);
    return 0;
}    