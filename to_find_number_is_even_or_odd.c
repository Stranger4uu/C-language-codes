#include<stdio.h>

int main(){

   int a;
   printf("Enter a number : ");
   scanf("%d",&a);

   if(a==0){
    printf("Please enter a Natural number\n");
   }

   else if (a%2==0){
    printf("This number is even\n");
   }
   else{
    printf("This number is odd\n");
   }

    return 0;
}