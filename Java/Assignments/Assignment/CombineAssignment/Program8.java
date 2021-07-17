
/*	Program 8: Write a Program that takes a number as input from and prints only those
	digits from that number, which are prime.

	I/p:141 (Take a hard coded value)
	O/p: the prime digit from the number 141 is 1,
*/

class OnlyPrimeNo {

	public static void main(String[] args) {

		int num = 147;

		while(num!=0) {

			int rem =num%10;
			
			int i=1; 
			int count=0;
			while(i<=rem) {

				if(rem%i==0) 
					count++;
				i++;
			}
			if(count==2)
				System.out.println("The prime digit from the number 147 is "+rem);
			num=num/10;
		}
	}
}
				


