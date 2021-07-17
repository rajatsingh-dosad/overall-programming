
/*	Program 3: Write a Program that prints occurrences of a digit from a number, Take
	
	input hardcoded Number: 345669760562. Digit to check Frequency: 6
	Output: The occurrence of 6 in number 34566970562 is 4.

*/

class OccurenceOfDigit  {

	public static void main(String[] args) {

		long num = 345669760562l;

		byte count = 0;

		while(num!=0) {

			long rem=num%10;

			if(rem==6) {
				count++;
			}
			num=num/10;
		}
		System.out.println("The occurence of 6 in number 34566970562 is "+count);
	}
}
