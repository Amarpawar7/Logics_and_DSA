#include<stdio.h>

float AddTwoNumbers(
                        float fNo1,   // First Input
                        float fNo2    // Second Input
                    )
{
    float fAns = 0.0f;         // Variable to store result i.e. Addition

    fAns = fNo1 + fNo2 ;       // Addition Operation

    return fAns ; 
}


int main(){

    float fValue1 = 0.0f ;
    float fValue2 = 0.0f ;
    float fResult = 0.0f ;

    printf("Enter first number : ");
    scanf("%f",&fValue1);

    printf("Enter second number : ");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1, fValue2);

    printf("Addition is: %f\n",fResult);

    return 0;
}