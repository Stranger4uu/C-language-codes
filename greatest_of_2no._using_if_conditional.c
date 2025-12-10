#include <stdio.h>

int main(){
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    
    if(a>b){
        printf("Greatest number is : %d\n",a);
    }
    else if (a==b)
    {
        printf("Both numbers are equal\n");
    }

    else printf("Greatest number is : %d\n",b);

    return 0;
}