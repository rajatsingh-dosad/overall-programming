
//Note : When we print in reverse order then always give recursive call first and then print statement and when we want to print in non-reverse then always write print statement first and then recursive call

import java.util.*;

class PrintNumber1ToN {
    
    static void number1ToN(int n) {

        if(n==0)
            return;
           
        number1ToN(n-1);
        System.out.print(n+" ");
        
    }   

    static void numberNTo1(int n) {

        if(n==0)
            return;
        
        System.out.print(n+" ");
        numberNTo1(n-1);
    }
}

class PrintNumber1ToN_Main {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the number: ");
        int n = sc.nextInt();

        System.out.println("Printing from 1 to N: ");
        PrintNumber1ToN.number1ToN(n);

        System.out.println("\nPrinting from N to 1: ");
        PrintNumber1ToN.numberNTo1(n);
        System.out.println();
    }
}
