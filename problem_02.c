// volume of a cylinder //
#include <stdio.h>

int main() {
    float r,pi,h;
    pi=3.14;
    printf("enter the radius of the base \n");
    scanf("%f",&r);
    printf("area of the base\n%f", pi*r*r);
    printf("\nenter the hieght of the cylinder\n");
    scanf("%f",&h);
    printf("volume of the cylinder\n%f",pi*r*r*h);

    return 0;
}