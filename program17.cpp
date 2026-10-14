#include<iostream>
#include<iostream>
using namespace std;

int CheckEvenOdd(int iNo){
    if (iNo % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter a number to chech wether it is Even or Odd : "<<endl;
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);    

    if(bRet){
        cout<<iValue<<" is Even"<<endl;
    }
    else{
        cout<<iValue<<" is Odd"<<endl;
    }

    return 0;
}