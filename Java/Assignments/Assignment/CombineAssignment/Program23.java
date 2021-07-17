
/*	Program 23: Write a Java program to take two numbers (hardcoded) and print its LCM
(Least Common Multiple).
Output: enter two numbers (Hardcoded): 10 15
LCM is 30.

*/

class LCM {

	public static void main(String[] args) {

		int num1=10;
		int num2=15;
		int gcd=1;
		for(int i=1; i<=num1 && i<=num2; i++) {

			if(num1%i==0 && num2%i==0)
				gcd=i;
		}

		System.out.println("Lcm is "+(num1*num2)/gcd);
	}
}
