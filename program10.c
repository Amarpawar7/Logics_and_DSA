/////////////////////////////////////////////////////////////////////////
//
// Include requried header file
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
// Function name : AddTwoNumbers
// Input         : float, float
// Output        : float
// Description   : Performs addition of 2 numbers
// Date          : 08/05/2026
// Aurthor       : Amar Dattatrya Pawar
//
/////////////////////////////////////////////////////////////////////////
float AddTwoNumbers(
                        float fNo1,   // First Input
                        float fNo2    // Second Input
                    )
{
    float fAns = 0.0f;         // Variable to store result i.e. Addition

    fAns = fNo1 + fNo2 ;       // Addition Operation

    return fAns ; 
}

/////////////////////////////////////////////////////////////////////////
//
// Application to perform addition of 2 float numbers
//
/////////////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////////////
//
// Input         : 10.1, 11.1
// Output        : 21.200001
//
/////////////////////////////////////////////////////////////////////////