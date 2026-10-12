#include<stdio.h>

float AddTwoNumbers(float fNo1, float fNo2){
    float fAns = 0.0f;

    fAns = fNo1 + fNo2 ; 
    
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