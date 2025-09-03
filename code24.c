// Write a program to calculate an electricity bill based on units consumed.

# include <stdio.h>
int main() {
    int a,b,c;
    printf("enter units consumed = ");
    scanf("%d",&a);
    if(a>=0 && a<=100){
        b = a*5;
        printf("bill is rupees %d",b);
    }else if(a>100 && a<=200){
        c = a*7;
        printf("bill is rupees %d",c);
    }else if(a>200 && a<=300){
        int d = a*10;
        printf("bill is rupees %d",d);
    }else if(a<0){
        printf("invalid input");
    }else{
        int e=a*12;
        printf("bill is rupees %d",e);
    }
    return 0;
}