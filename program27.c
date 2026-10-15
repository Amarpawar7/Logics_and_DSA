#include<stdio.h>

int main(){
    
    int iCnt = 0;
    int iValue = 0;
    printf("Enter the freqency : ");
    scanf("%d",&iValue);

    for(iCnt = 1; iCnt<=iValue; iCnt++){
        printf("Hello World...\n");
    }

    return 0;
}