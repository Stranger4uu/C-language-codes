#include <stdio.h>

int main(){
    int a , b, c , avg;
    printf("Enter 1st value : ");
    scanf("%d",&a);
    printf("Enter 2nd value : ");
    scanf("%d",&b);
    printf("Enter 3rd value : ");
    scanf("%d",&c);

    avg = (a+b+c)/3;
    printf("Average of these numbers %d , %d , %d is : %d",a,b,c,avg);
    printf("\n");
    return 0;
}