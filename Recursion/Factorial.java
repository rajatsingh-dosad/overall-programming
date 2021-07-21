
import java.util.*;

class Factorial {

    int fact(int n) {

        if(n==1)
            return n;
        return n * fact(n-1);
    }
}

class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number: ");
        int n = sc.nextInt();

        Factorial obj = new Factorial();

        int ans = obj.fact(n);

        System.out.println("The factorial of "+n +" is: "+ans );
    }
}