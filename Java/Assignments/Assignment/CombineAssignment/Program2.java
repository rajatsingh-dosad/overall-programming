
/*	Program 2: Write a code in Java, to find Greatest Common Divisor (GCD) of two given
	numbers.
*/

class GCD {

	public static void main(String[] args) {

		int num1 = 24;
		
		int num2 = 60;
		int gcd=1;

		for(int i=1; i<=num1 && i<=num2; i++) {

			if(num1%i==0 && num2%i==0) {
				gcd=i;
			}
		}
		System.out.println("Gcd of 24 and 60 is "+gcd);
		
	}
}

		


