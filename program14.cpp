#include<iostream>
#include<iostream>
using namespace std;

int CheckEvenOdd(int iNo){
    int iRemainder = 0;

    iRemainder = iNo % 2;

}

int main(){
    int iValue = 0;
    int iRet =0;

    cout<<"Enter a number to chech wether it is Even or Odd : "<<endl;
    cin>>iValue;

    iRet = CheckEvenOdd(iValue);    

    if(iRet == 0){
        cout<<iValue<<" is Even"<<endl;
    }
    else{
        cout<<iValue<<" is Odd"<<endl;
    }

    return 0;
}