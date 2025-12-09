#include <stdio.h>

int main(){
    float r,volume,height;
    printf("Enter radius of cone : ");
    

    scanf("%f",&r);
    printf("Enter height of cone : ");
    scanf("%f",&height);
    volume = (1.0/3) * 3.14 * r * r * height;

    printf("volume of sphere is : %f\n",volume);

    return 0;
}