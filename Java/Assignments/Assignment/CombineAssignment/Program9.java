
/*	Program 9: Write a java program to check if the taken number is palindrome or not.
	
	Input: 121 (Take Hardcoded)
	Output: 121 is a palindrome number
*/


class Palindrome {

	public static void main(String[] args) {

		int num=121;
		int dup= num;
		int palindrome=0;
		while(num!=0) {

			palindrome = (palindrome*10) + (num%10);
			num = num/10;
		}
		if(dup == palindrome)
			System.out.println("121 is a palindrome number.");
	}
}


