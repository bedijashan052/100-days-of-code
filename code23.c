// Write a program to calculate a library fine based on late days.

# include <stdio.h>
int main() {
    int a,c;
    float b;
    printf("enter number of late days = ");
    scanf("%d",&a);
    b = 5;
    if (a>0 && a<=20){ 
        c = a * b;
        printf("fine rupees %d",c);
    }else if(a<=0){
        printf("inavlid input");
    }else{
        printf("membership cancelled");
    }
    return 0;
}