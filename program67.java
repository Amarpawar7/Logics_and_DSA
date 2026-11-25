// accept number from user and check if its prime or not

import java.util.Scanner;
class NumberX{
    public boolean CheckPrime(int iNo){

        int iCnt =0;
        
        for (iCnt = 2; iCnt <= (iNo / 2); iCnt++){
            if((iNo%iCnt) == 0){
                return false;       // bad programming practice coz return shouldn't be their inside loop,directly comes out of instruction queue that might put load on cpu
            }
        }
        return true;

    }
}

// class NumberX{
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

class program67{

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

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

