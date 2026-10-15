#include<stdio.h>

void Display(int iNo){

    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++){
        printf("Hello World...\n");
    }
}

int main(){
    
    int iValue = 0;

    printf("Enter the freqency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}