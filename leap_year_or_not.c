#include <stdio.h>

int main(){
    int a ;
    printf("Enter a year :");
    scanf("%d",&a);

    if (a % 400 == 0)
    printf("leap year");
else if (a % 100 == 0)
    printf("not leap year");
else if (a % 4 == 0)
    printf("leap year");
else
    printf("not leap year");

    return 0;
}