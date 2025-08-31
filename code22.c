// Write a program to find profit or loss percentage given cost price and selling price.

# include <stdio.h>
int main() {
    float a,b,c,d;
    printf("enter cost price = ");
    scanf("%f",&a);
    printf("enter selling price = ");
    scanf("%f",&b);
    if(a==b){
        printf("no profit no loss");
    }else if(a<b){
        c = b-a;
        d = (c/a)*100;
        printf("profit %.2f%% \n",d);
    }else if(a>b){
        c = a-b;
        d = (c/a)*100;
        printf("loss %.2f%% \n",d);
    }
    return 0;
}