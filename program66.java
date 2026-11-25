// accept number from user and check if its prime or not

import java.util.Scanner;
class Numbers{
    public boolean CheckPrime(int iNo){

        int iCnt =0;
        
        for (iCnt = 2; iCnt <= (iNo / 2); iCnt++){
            if((iNo%iCnt) == 0){
                break;
            }
        }
        if(iCnt<iNo/2){
            return false;
        }
        else{
            return true;
        }

    }
}

// class Numbers{
//     public boolean CheckPrime(int iNo){

//         int iCnt =0;
        
//         for (iCnt = 2; iCnt < (iNo / 2); iCnt++){
//             if((iNo%iCnt) == 0){
//                 break;
//             }
//         }
//         if(iCnt== iNo/2){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// }

class program66{

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Numbers nobj = new Numbers();

        bRet = nobj.CheckPrime(iValue);

        if(bRet == true){
            System.out.println("Number is Prime Number");
        }
        else{
            System.out.println("Number is not a Prime Number");
        }
    }
}

// Time Complexity : O(N/2)
// where N >= 0

