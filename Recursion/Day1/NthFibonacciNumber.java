
// Find the Nth fibonacci number using multiple recursion call inside function

//  Fibonacci series ->  0 1 1 2 3 5 8 13 ...
//  The base case for the reursion code will be :
//      since we know that fib(0) = 0 and fib(1) = 1 so this becomes our base case
//  And our recurrence relation will be fib(n-1) + fib(n-2) because addition of the last two number is the next number.

import java.util.*;

class NthFibonacciNumber {
    
    int ans = 0;
    int fibonacci(int n) {

        if(n<=1)
            return n;
        ans = fibonacci(n-1) + fibonacci(n-2);
        return ans;
    }   

}

class Fib_Main {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        NthFibonacciNumber obj = new NthFibonacciNumber();

        int n;
        System.out.print("Enter the number: ");
        n = sc.nextInt();

        System.out.println("The "+n+"th fibonacci number is: "+obj.fibonacci(n));
    }
}

                                                        