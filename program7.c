#include<stdio.h>

int main(){

    float fValue1 = 0.0f ;     // New Variable to store first input
    float fValue2 = 0.0f ;     // New Variable to store second input
    float fValue3 = 0.0f ;     // New Variable to store result

    printf("Enter first number : ");
    scanf("%f",&fValue1);

    printf("Enter second number : ");
    scanf("%f",&fValue2);

    fValue3 = fValue1+fValue2;          //Perfoms the Addition

    printf("Addition is: %f\n",fValue3);

    return 0;
}