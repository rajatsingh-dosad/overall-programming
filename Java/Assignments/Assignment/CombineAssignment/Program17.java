

/*	Program 17: Write a program to check whether the number is prime number or not
	(Take hardcoded Value)

	Input: 13
	Output: It is a prime number
*/

class PrimeNo {

	public static void main(String[] args) {

		int num = 13;
		int count=0;
		for(int i=1; i<=13; i++) {

			if(num%i==0)
				count++;
		}
		if(count==2)
			System.out.println("It is a prime number.");

	}
}
