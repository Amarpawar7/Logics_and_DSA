#include<iostream>
using namespace std;

float AddTwoNumbers(float fNo1, float fNo2){
    float fAns = 0;

    fAns = fNo1 + fNo2 ; 
    
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