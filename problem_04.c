//simple interest calculator
#include <stdio.h>

int main() {
    float p,r,i,a;
    int t;
    printf("enter the principle amount\n");
    scanf("%f",&p);
    printf("enter the rate of interest\n");
    scanf("%f",&r);
    printf("enter  time period\n");
    scanf("%d",&t);
    i = (p*r*t)/100;
    a = i+p;
    printf("Interest\n%f",i);
    printf("\nAmount\n%f",a);
    
    return 0;
}