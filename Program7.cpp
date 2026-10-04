#include<iostream>
using namespace std;

int main(){

    float Value1 = 0, Value2 =0, Value3= 0;       //Variables shouldn't be uninitialised coz it may set its default value as a garbage value
 
    cout<<"Enter the first number : ";
    cin>>Value1;

    cout<<"Enter the second number : ";
    cin>>Value2;
    
    Value3 = Value1+Value2;

    cout<<"Addition is : "<<Value3<<endl;

    return 0;
}