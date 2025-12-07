#include <stdio.h>

int main()
{
    float a, b, add, sub, multi, div;
    printf("Enter a number : ");
    scanf("%f",&a);
    printf("Enter a number : ");
    scanf("%f",&b);
  

    add = a+b;
    sub = a-b;
    multi = a*b;
    if (b != 0) {
        div = a / b;   
    } else {
        printf("Division by zero not possible\n");
        return 0;
    }

printf("Addition of %.0f and  %.0f is : %.2f\n",a,b,add);
printf("Subtraction of %.0f and %.0f is : %.2f\n",a,b,sub);
printf("Multiplication of %.0f and %.0f is : %.2f\n",a,b,multi);
printf("Division of %.0f and %.0f is : %.2f\n",a,b,div);

    return 0;
}