// Type 2

import java.util.Scanner;

class program40{

    void CheckDivisible(int iNo){

        if((iNo % 3 ==0) && (iNo % 5 == 0)){
            System.err.println("Number is divisible by both 3 and 5");
        }
        else{
            System.err.println("Number is not divisible by both 3 and 5");
        }
    }
    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number : ");

        iValue = sobj.nextInt();

        CheckDivisible(iValue); // Error as its non static function which is being called inside a static function
    


    }
}

