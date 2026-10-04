/*
    Algorithm : 
        START
            Accept first number as NO1
            Accept second number as NO2
            Perform Addition of NO1 and NO2
            Display the result
        STOP

*/

#include<stdio.h>

int main(){

    float i,j,ans;

    printf("Enter first number : ");
    scanf("%f",&i);

    printf("Enter second number : ");
    scanf("%f",&j);

    ans = i + j;

    printf("Addition is: %f\n",ans);

    return 0;
}