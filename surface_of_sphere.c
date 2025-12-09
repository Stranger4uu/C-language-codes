#include <stdio.h>

int main(){
    float r,surface;
    printf("Enter radius of sphere : ");
    scanf("%f",&r);
    surface = 4*3.14*r*r;
    printf("surface of sphere is : %f\n",surface);

    return 0;
}