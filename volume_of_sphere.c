#include <stdio.h>

int main(){
    float r,volume;
    printf("Enter radius of sphere : ");
    scanf("%f",&r);
    volume = 4.0/3.0*3.14*r*r*r;
    printf("volume of sphere is : %f\n",volume);

    return 0;
}