/////////////////////////////////////////////////////////////////////////
//
// Include requried header file
//
/////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

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
                        float fNo1,      // First Input
                        float fNo2       // Second Input
                    )
{
    float fAns = 0;         // Variable to store result i.e. Addition

    fAns = fNo1 + fNo2 ;        // Addition Operation
    
    return fAns ; 
}

/////////////////////////////////////////////////////////////////////////
//
// Application to perform addition of 2 float numbers
//
/////////////////////////////////////////////////////////////////////////
int main(){

    float fValue1 = 0;
    float fValue2 = 0;
    float fResult = 0;
 
    cout<<"Enter the first number : ";
    cin>>fValue1;

    cout<<"Enter the second number : ";
    cin>>fValue2;
    
    fResult = AddTwoNumbers(fValue1, fValue2);

    cout<<"Addition is : "<<fResult<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
// Input         : 10.1, 11.1
// Output        : 21.2
//
/////////////////////////////////////////////////////////////////////////










