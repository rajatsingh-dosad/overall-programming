
/*	Program 24: Write a Java program, take a number (Hardcoded) and print the count of
	its digits.
	
	Input: enter any number: 234
	Output: number of digits: 3 

*/

class CountOfDigits  {

	public static void main(String[] args) {

		int num = 234;
		int count=0;
		while(num!=0) {

			num = num/10;
			count++;
		}
		System.out.println("Number of digits: "+count);
	}
}
