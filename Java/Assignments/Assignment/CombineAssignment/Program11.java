
/*	Program 11: Write a Program that accepts an integer from user and prints all of its
	perfect divisors.

	Input: 24
	Output: Perfect Divisors of 24 are: 2 3 4 6 8 12
*/

class PerfectDivisor {

	public static void main(String[] args) {

		int num = 24;
		
		System.out.print("Perfect Divisors of 24 are: ");
		for(int i=2; i<24; i++) {

			if(24%i==0)
				System.out.print(i+" ");
		}
		System.out.println();
	}
}
