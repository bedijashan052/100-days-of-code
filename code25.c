// Write a program to implement a basic calculator using switch-case for +, -, *, /.

# include <stdio.h>
int main() {
    int op;
    float a,b,c;
    printf("enter a = ");
    scanf("%f",&a);
    printf("enter b = ");
    scanf("%f",&b);
    printf("1 for '+'\n2 for '-'\n3 for '*'\n4 for '/'\n");
    printf("enter an operator number = ");
    scanf("%d",&op);
    switch (op) {
        case 1:
            c = a+b;
            printf("sum is %f",c);
            break;
        case 2:
            c = a-b;
            printf("difference is %f",c);
            break;
        case 3:
            c = a*b;
            printf("multiplication is %f",c);
            break;
        case 4:
             if (b != 0)
                c = a / b, printf("division is %.2f\n", c);
            else
                printf("Error: Division by zero not allowed!\n");
            break;
    }
    return 0;
}