
/*	Program 6: write a program to check whether the number is perfect number or not
	Hint: (positive integer that is equal to the sum of its proper divisors)
	
	e.g i/p : take hardcoded value
	o/p : 6 is a prefect number
*/

class PerfectNo {

	public static void main(String[] args) {

		int num = 6;
		int sum=0;
		for(int i=1; i<6; i++) {

			if(6%i==0)
				sum=sum+i;

		}
		if(sum==num)
			System.out.println("6 is a perfect number.");
		else
			System.out.println("6 is not a perfect number.");
	}
}

