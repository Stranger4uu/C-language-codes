#include <stdio.h>

int main(){
    float r,volume,height;
    printf("Enter radius of cylinder: ");
    

    scanf("%f",&r);
    printf("Enter height of cylinder : ");
    scanf("%f",&height);
    volume = 3.14 * r * r * height;

    printf("volume of cylinder is : %f\n",volume);

    return 0;
}