// // temperature unit conversion//
// #include <stdio.h>

// int main() {
//     float C,F;
//     printf("enter the temperature in farenhite\t");
//     scanf("%f",&F);
//     C = 5*((F-32)/9);
//     printf("temperature in celcius\t%f",C);
//     return 0;
// }
// temperature unit conversion//
#include <stdio.h>

int main() {
    float C,F;
    printf("enter the temperature in celsious\t");
    scanf("%f",&C);
    F = 9*(C/5)+32;
    printf("temperature in farenhite\t%f",F);
    return 0;
}
