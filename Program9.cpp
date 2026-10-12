#include<iostream>
using namespace std;

float AddTwoNumbers(
                        float fNo1,      // First Input
                        float fNo2       // Second Input
                    )
{
    float fAns = 0;         // Variable to store result i.e. Addition

    fAns = fNo1 + fNo2 ;        // Addition Operation
    
    return fAns ; 
}

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