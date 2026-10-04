#include<stdio.h>

int main(){

    float i = 0.0f ;     //Variables shouldn't be uninitialised coz it may set its default value as a garbage value
    float j = 0.0f ;
    float ans = 0.0f ;

    printf("Enter first number : ");
    scanf("%f",&i);

    printf("Enter second number : ");
    scanf("%f",&j);

    ans = i+j;

    printf("Addition is: %f\n",ans);

    return 0;
}

