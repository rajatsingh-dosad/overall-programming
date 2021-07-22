
//Single function call inside the same function

import java.util.*;

class Factorial {

    int ans = 1;
    int fact(int n) {

        if(n==1)
            return n;
        ans = n * fact(n-1);
        return ans;
    }
}

class Fact_Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number: ");
        int n = sc.nextInt();

        Factorial obj = new Factorial();

        int ans = obj.fact(n);

        System.out.println("The factorial of "+n +" is: "+ans );
    }
}