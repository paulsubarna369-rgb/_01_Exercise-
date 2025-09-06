// area of a rectangle//
#include <stdio.h>

int main() {
    int length , breath, area;
    printf("enter the length\n");
    scanf("%d", &length);
    printf("enter the breath\n");
    scanf("%d", &breath);
    area = length*breath;
    printf("area of rectangle \n%d",area);
    
    return 0;
}