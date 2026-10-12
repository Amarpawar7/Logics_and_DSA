#include<iostream>
using namespace std;

void CheckEvenOdd(int iNo){
    int iRemainder = 0;

    iRemainder = iNo % 2;

    if(iRemainder == 0){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
}

int main(){
    int iValue = 0;
    
    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    CheckEvenOdd(iValue);    

    return 0;
}