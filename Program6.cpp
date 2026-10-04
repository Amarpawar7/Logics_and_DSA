#include<iostream>
using namespace std;

int main(){

    float i = 0, j =0, ans= 0;       //Variables shouldn't be uninitialised coz it may set its default value as a garbage value
 
    cout<<"Enter the first number : ";
    cin>>i;

    cout<<"Enter the second number : ";
    cin>>j;
    
    ans = i+j;

    cout<<"Addition is : "<<ans<<endl;

    return 0;
}