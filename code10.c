// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

# include <stdio.h>
int main() {
    int a;
    printf("enter time in seconds = ");
    scanf("%d",&a);
    int hours;
    hours = a/3600;
    int c;
    c = a%3600;
    int minutes;
    minutes = c / 60;
    int seconds = c % 60;
    printf("time in H:M:S = %d:%d:%d",hours,minutes,seconds);    
    return 0;
}