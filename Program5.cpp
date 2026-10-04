/*
    Algorithm : 
        START
            Accept first number as NO1
            Accept second number as NO2
            Perform Addition of NO1 and NO2
            Display the result
        STOP

*/

#include<iostream>
using namespace std;

int main(){

    float i,j,ans;

    cout<<"Enter the first number : ";
    cin>>i;

    cout<<"Enter the second number : ";
    cin>>j;
    
    ans = i+j;

    cout<<"Addition is : "<<ans<<endl;

    return 0;
}