// code for printing factors of a number

import java.util.Scanner;

class NumberX{
    public void DisplayFactors(int iNo){

        int iCnt =0;
        System.out.println("Factors of "+iNo+" are : ");
        for (iCnt = 1; iCnt <= (iNo / 2); iCnt++ ){
            if((iNo%iCnt) == 0){
                System.err.println(iCnt);
            }
        }
    }
}

class program47{

    
    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        nobj.DisplayFactors(iValue);

    }
}

// Time Complexity : O(N/2)
// where N >= 0