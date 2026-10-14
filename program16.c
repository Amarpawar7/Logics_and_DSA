#include<stdio.h>
#include<stdbool.h>    // bool function is not there in C so we include this header file

bool CheckEvenOdd(int iNo){
    if (iNo % 2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number to chech wether it is Even or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);    

    if(bRet == true){
        printf("%d is Even\n",iValue);
    }
    else{
        printf("%d is Odd\n",iValue);
    }

    return 0;
}